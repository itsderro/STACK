#include <iostream>
#include <string>
#include <limits>

using namespace std;
#define MAX 100

class friendsStack{
    int TOP;
    string arr[MAX];
    public:
        friendsStack( ){
        TOP=-1;
    }
    void push(string Friend){
        if(TOP==MAX-1){
            cout<<"OVERfLoW..."<<endl;
        }else{
            TOP+=1;
            arr[TOP]=Friend;
        }
    }
    void printstack(){
        if(TOP== -1){
            cout<<"Stack is empty"<<endl;
        }else{
            for (int i=0;i<=TOP;i++){
            cout<<arr[i]<<endl;
            }
        }
    }
    string popStack(){
        if(TOP==-1){
            cout<<"Stack underflow. Stack is empty"<<endl;
        }else{
        string value= arr[TOP];
        TOP=TOP-1;
        cout<<"yOU HAVE REMOVED "<<value<<endl;
        return value;
        }
    }
};



int main()
{
    friendsStack F;
     int CHOICE;
     string FRI;
      cout<<"****WELCOME TO YOUR FRIENDS COLLECTION****"<<endl;
     do{
        cout<<"1. Add a friend"<<endl;
        cout<<"2. Display friends"<<endl;
        cout<<"3. Delete most recent friend"<<endl;
        cout<<"4. Clear the screen"<<endl;
        cout<<"To exit press 0"<<endl;
         cout<<"Please make a choice:"<<endl;
        cin>>CHOICE;
        if(cin.fail()){
        cout<<"Invalid input. Please try again!"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cin>>CHOICE;
        }
         switch(CHOICE){
            case 0:
                break;
            case 1:
                cout<<"Enter your friend's name"<<endl;
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                getline(cin,FRI);
                F.push(FRI);
                break;
            case 2:
                F.printstack();
                break;
            case 3:
                F.popStack();
                break;
            case 4:
                system("cls");
                break;
            default:
                cout<<"Invalid input. Please try again!"<<endl;
                break;
         }
            }while( CHOICE!=0);
    return 0;
}
