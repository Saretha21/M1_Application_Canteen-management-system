#include <stdio.h>
#include <conio.h>

/*To avoid implicit declaration*/
int Main_Menu();
int User_Login();
int Cust_Login();
int Vend_Login();
int New_User();
int Reg_Cust_Login();
int Reg_Vend_Login();
int Logout();

/*Level 1 Entry*/
int Main_Menu(){
    int choice;
    printf("\nSelect from:-\n\n\t1.User Login\n\t2.Registering New User\n\t3.Log out\n");
    printf("\nEnter your option: "); scanf("%d",&choice);
    while(choice>3||choice<1)
    {
        printf("\nPlease Enter an valid option.:/\n");
        printf("\nEnter your option: "); scanf("%d",&choice);
    }
    printf("\n********************");
    if(choice==1) User_Login();
    if(choice==2) New_User();
    if(choice==3) Logout();
}

/*Level 2 Entry*/
int User_Login(){
    int opt1; 
    printf("\nSelect from:-\n\n\t1.Customer Login\n\t2.Vendor Login\n\t3.Back to Main_Menu\n");
    printf("\nEnter your option: "); scanf("%d",&opt1);
    while(opt1>3||opt1<1){
        printf("\nPlease Enter an valid option.:/\n");
        printf("\nEnter your option: "); scanf("%d",&opt1);
    }
    printf("\n********************");
    if(opt1==1) Cust_Login();
    if(opt1==2) Vend_Login();
    if(opt1==3) Main_Menu();
}

int New_User(){
    int opt2; 
    printf("\nSelect from:-\n\n\t1.Register new Customer Login\n\t2.Register new Vendor Login\n\t3.Back to Main_Menu\n");
    printf("\nEnter your option: "); scanf("%d",&opt2);
    while(opt2>3||opt2<1){
        printf("\nPlease Enter an valid option.:/\n");
        printf("\nEnter your option: "); scanf("%d",&opt2);
    }
    printf("\n********************");
    if(opt2==1) Reg_Cust_Login();
    if(opt2==2) Reg_Vend_Login();
    if(opt2==3) Main_Menu();
}

int Logout(){
    printf("\n\n******************************************\nThanks for using the system. Have a good day.\n******************************************");
}

/*Level 3 Entry*/
int Cust_Login(){
    int opt3; 
    char id[30], pwd[20];
    printf("\nSelect from:-\n\n\t1.Login\n\t2.Back to User_Login\n");
    printf("\nEnter your option: "); scanf("%d",&opt3);
    while(opt3>2||opt3<1){
        printf("\nPlease Enter an valid option.:/\n");
        printf("\nEnter your option: "); scanf("%d",&opt3);
    }
    if(opt3==1){
    printf("\nCustomer id: "); scanf("%s",id);
    printf("\nPassword: "); scanf("%s",pwd);
    printf("\n********************");
    Main_Menu();
    }
    
    if(opt3==2){
        printf("\n********************"); User_Login();    
    } 
}

int Vend_Login(){
    int opt4;
    char id[30], pwd[20];
    printf("\nSelect from:-\n\n\t1.Login\n\t2.Back to User_Login\n");
    printf("\nEnter your option: "); scanf("%d",&opt4);
    while(opt4>2||opt4<1){
        printf("\nPlease Enter an valid option.:/\n");
        printf("\nEnter your option: "); scanf("%d",&opt4);
    }
    if(opt4==1){
    printf("\nVendor id: "); scanf("%s",id);
    printf("\nPassword: "); scanf("%s",pwd);
    printf("\n********************");
    Main_Menu();
    }
    if(opt4==2){
        printf("\n********************"); User_Login();  
    } 
}

int Reg_Cust_Login(){
    int opt5; 
    char id[30], pwd[20],name[30],mail[50];
    printf("\nSelect from:-\n\n\t1.Register\n\t2.Back to User_Login\n");
    printf("\nEnter your option: "); scanf("%d",&opt5);
    while(opt5>2||opt5<1){
        printf("\nPlease Enter an valid option.:/\n");
        printf("\nEnter your option: "); scanf("%d",&opt5);
    }
    if(opt5==1){
    printf("\nCustomer id: "); scanf("%s",id);
    printf("\nCustomer name: "); scanf("%s",name);
    printf("\nE-Mail:"); scanf("%s",mail);
    printf("\nSet your Password: "); scanf("%s",pwd);
    printf("\n********************");
    Main_Menu();
    }
    if(opt5==2){
        printf("\n********************"); User_Login();    
    } 
}

int Reg_Vend_Login(){
    int opt6;
    char id[30], pwd[20],name[30],mail[50];
    printf("\nSelect from:-\n\n\t1.Register\n\t2.Back to User_Login\n");
    printf("\nEnter your option: "); scanf("%d",&opt6);
    while(opt6>2||opt6<1){
        printf("\nPlease Enter an valid option.:/\n");
        printf("\nEnter your option: "); scanf("%d",&opt6);
    }
    if(opt6==1){
    printf("\nVendor id: "); scanf("%s",id);
    printf("\nVendor name: "); scanf("%s",name);
    printf("\nE-Mail:"); scanf("%s",mail);
    printf("\nSet your Password: "); scanf("%s",pwd);
    printf("\n********************");
    Main_Menu();
    }
    if(opt6==2){
        printf("\n********************"); User_Login();
    }
}

/*Main block*/
void main()
{
    printf("\n***************************\nCanteen Management System\n***************************\n");
    Main_Menu();
}


