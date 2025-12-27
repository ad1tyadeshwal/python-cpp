#include<iostream>
using namespace std;

class bank {
public:
    int account_number;
    string account_holder_name;
    int pin; 
    int balance;
    bool created;
    
    
    string transactions[100];
    int his ;

    
    bool checkpin (){
        int enterpin;
        cout<<"enter pin"<<endl;
        cin>>enterpin;
        return enterpin==pin; 
    };

    bool checkno (){
        int enter_acc_no;
        cout<<"enter account no.:"<<endl;
        cin>>enter_acc_no;
        return enter_acc_no==account_number;

    };
public:
    bank (){
        balance=0;
        created=false;
        his=0;

    };
    void create_account(){
        cout<<"enter account no:"<<endl;
        cin>>account_number;

        cout<<"enter the name of account holder:"<<endl;
        cin>>account_holder_name;

        cout<<"create a PIN:"<<endl;
        cin >>pin;

        balance =0;
        created=true;

        transactions[his++]="account created";

        cout<<"account created ✅ "<<endl;
        cout<<"balance:₹ "<<balance<<endl;

    };   
    void deposit(){
        
        if(!created){
        cout<<"create an account first😇"<<endl;
        return;
        };

        if(!checkno()){
            cout<<"wrong❌"<<endl;
            return;
        };

        if(!checkpin()){
            cout<<"wrong❌"<<endl;
            return;
        };

        int amount;

        cout<<"enter amount to deposit:₹"<<endl;
        cin>>amount;
        if (amount>0) { 
            balance= balance+amount;
            transactions[his++]="deposited:₹"+to_string(amount);
            cout<<"added ✅"<<endl;
        }
        else{ 
            cout<<" unsucessfull❌"<<endl;    
        }
        
    };
    
    void withdraw(){

        if(!created){
        cout<<"create an account first😇"<<endl;
        return;
        };

        if(!checkno()){
            cout<<"wrong❌"<<endl;
            return;
        };

        if(!checkpin()){
            cout<<"wrong❌"<<endl;
            return;
        };
        
        int amount; 

        cout<<"enter amount to withdraw:"<<endl;
        cin>>amount;
        if (amount>0 && amount <= balance) { 
            balance=balance-amount;
            transactions[his++]="withdrawn:₹"+to_string(amount);
            cout<<"done ✅"<<endl;
        }
        else{ 
            cout<<" gareeb and unsucessfull❌"<<endl;    
        };


    };

    void transfer(){
        
        if(!created){
        cout<<"create an account first😇"<<endl;
        return;
        };

        if(!checkno()){
            cout<<"wrong❌"<<endl;
            return;
        };

        if(!checkpin()){
            cout<<"wrong❌"<<endl;
            return;
        };

        int amount;
        int to_account;


        cout<<"enter account no:"<<endl;
        cin>>to_account;

        cout<<"enter amount need to transfer:₹"<<endl;
        cin>>amount;

        if (amount>0 && amount <= balance) {
            balance=balance-amount;
            transactions[his++]="transfered:₹"+to_string(amount)+"to account"+to_string(to_account);
            cout<<"transferred sucessfully✅"<<endl;
         }
        else{
            cout<<"unsucessfull❌"<<endl;
        };
        

    };

    void history(){

        if(!created){
        cout<<"create an account first😇"<<endl;
        return;
        };

        if(!checkno()){
            cout<<"wrong❌"<<endl;
            return;
        };

        if(!checkpin()){
            cout<<"wrong❌"<<endl;
            return;
        };

        cout<<"\n💵💵💵💵💵💵💵💵💵💵TRANSACTION HISTORY💵💵💵💵💵💵💵💵💵💵💵💵💵"<<endl;
        if(his == 0){
            cout<<"No transactions yet 😴"<<endl;
        }
        else{
            for(int i=0; i<his; i++){
                cout<<transactions[i]<<endl;
            }
        };
        

    };

    void details(){
        
        if(!created){
        cout<<"create an account first😇"<<endl;
        return;
        };

        if(!checkno()){
            cout<<"wrong❌"<<endl;
            return;
        };

        if(!checkpin()){
            cout<<"wrong❌"<<endl;
            return;
        };

        cout<<"account number:"<<account_number<<endl;
        cout<<"account holder name:"<<account_holder_name<<endl;
        cout<<"account balance:₹"<<balance<<endl;

    };

}; 

int main (){
    bank b;
    int choice;

        do{
        cout<<"\n1.create account"<<endl;
        cout<<"2.deposite 💵 "<<endl;
        cout<<"3.withdraw 💵 "<<endl;
        cout<<"4.display holder details👀 "<<endl;
        cout<<"5.transfer 💰 "<<endl;
        cout<<"6.transaction history☠️ "<<endl;
        cout<<"7. exit 😎"<<endl;
        cout<< " choose😖 "<<endl;
        cin>>choice;
        
        switch (choice)
        {
        case 1:
            b.create_account();
            break;

        case 2:
            b.deposit();
            break;

        case 3:
            b.withdraw();
            break;    
         
        case 4:
            b.details();
            break;

        case 5:
            b.transfer();
            break; 
            
        case 6:
            b.history();
            break;     

        case 7:
            cout<<" bye bye 👋"<<endl;

        default:
            break;
        };
    }while (choice!=7);
    return 0;
}


