/*Employee Salary Management System

Employees ka naam aur salary store karo
Menu: Add employee, View all, Find highest paid, Calculate average salary
Same logic, bas naam badal jayenge*/

#include<iostream>
#include<string>
using namespace std;
int name[5],salary[5];
int string[5];
int totalemployees;

void addemployees(){
    cout<<"\n====enter the 5 employees detail";
    for(int i=0;i<5;i++){
        cout<<"enter the emplopees name"<<(i+1);
        cin >> name[i];

        cout<<"enter the employees salary"<<(i+1);
        cin >> salary[i];
}
    totalemployees = 5;
    cout<<"employees added";
    return ;
}

void viewsalary(){
    if(totalemployees==0){
        cout<<"no data available.add the detail";
        return ;
    }
     cout<<"enter the employees record";
     for(int i=0;i<totalemployees;i++){
        cout<< "name" <<  name[i]  <<  "salary" <<  salary[i] <<endl;
     }

}

void findhighersalary (){
    if(totalemployees==0){
        cout<<"no data available . add the detail";
        return;
    }
    int big = salary[0];
    int index=0;

    for(int i=0;i<totalemployees;i++)
    {
        if(salary[i]>big){
            big = salary[i];
            index = i;
        }

    }
cout<<"\n highersalary"<<  name[index]  << "withsalary"  <<  big <<endl;

}

void calculationavg (){
    if(totalemployees==0){
        cout<<"no data available . add the detail";
        return;
}
int sum=0;
for(int i=0;i<totalemployees;i++){
    sum += salary[i];
}
float avg = float(sum) / totalemployees;
cout<<"\n average salary"<<avg<<endl; 
}

int main (){
    int choice;
    while(true){
        cout<<"\n===Employee Salary Management System===\n";
        cout<<"addemployees";
        cout<<"viewsalary";
        cout<<"findhigersalary";
        cout<<"calculatingavg";
        cout<<"exit";
        cout<<"enter your choice";
        cin>>choice;
    switch(choice){
        case 1:
        addemployees();
        break;

        case 2:
        viewsalary();
        break;

        case 3:
        findhighersalary();
        break;

        case 4:
        calculationavg();
        break;

        case 5:
        cout<<"envalid program : goodbye\n";
        break;

        default:
                cout << "Invalid choice! Please try again.\n";

    }

    }
    return 0;
}