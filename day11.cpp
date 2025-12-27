#include<iostream>
using namespace std;

class students {
    int roll_no ;
    int correct;
    int incorrect;
    bool examgiven;
public:
    students () {
        correct =0;
        incorrect=0;
        examgiven=false;
    }
    void giveexam(){
        cout<<"enter your roll no.:";
        cin>>roll_no;

        correct=0;
        incorrect=0;

        char ans;

        cout<<"2+2=4"<<endl;
        cin>>ans;
        if (ans == 't' )
            correct++;
        else 
            incorrect++;

        cout<<"5+5=100"<<endl;
        cin>>ans;
        if (ans == 't' )
            correct++;
        else 
            incorrect++;
            

        cout<<"8+2=1000000"<<endl;
        cin>>ans;
        if (ans == 't' )
            correct++;
        else 
            incorrect++;
                
        cout<<"50+50=100"<<endl;
        cin>>ans;
        if (ans == 't' )
            correct++;
        else 
            incorrect++;

        examgiven =true;
        cout<<"👍"<<endl;    
            
    };
    void show_result() {

        if(!examgiven){
        cout<<"go to hell😇"<<endl;
        return;
        };

         int entered_roll;
        cout << "Enter roll number to view result: ";
        cin >> entered_roll;

        if(entered_roll != roll_no){
            cout<<" paper de phele 😑"<<endl;
            return;
        };

        int marks = correct * 4;
        cout<<"====== EXAM RESULT☠️======="<<endl;
        cout<<"roll number:"<<roll_no<<endl;
        cout<<"correct ans :"<<correct<<endl;
        cout<<"incorrect ans:"<<incorrect<<endl;
        cout<<"marks:"<<marks<<endl;
        
    };
};          
int main (){
    students s;
    int choice;
    
    do{
        cout<<"\n1. give exam 😩"<<endl;
        cout<<"2. show result 👀"<<endl;
        cout<<"3. exit 😎"<<endl;
        cout<< " choose😖 "<<endl;
        cin>>choice;
        
        switch (choice)
        {
        case 1:
            s.giveexam();
            break;

        case 2:
            s.show_result();
            break;

        case 3:
            cout<<" bye bye 👋"<<endl;

        default:cout<<"not nerdy enough to understand! 😡"<<endl;
            break;
        };
    }while (choice!=3);
    return 0;
}





































    





















    



















