#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20];
int total=0;
void enter(){
    int value;
    cout<<"How many students to store:"<<endl;
    cin>>value;
    if(total== 0){
    total=total+value;
    for(int i=0;i<value;i++){
        cout<<"enter data of student "<<i+1<<":"<<endl;
        cout<<"enter name:";
        cin>>arr1[i];
        cout<<"enter ID:";
        cin>>arr2[i];
        cout<<"enter course:";
        cin>>arr3[i];
        cout<<"enter contact:";
        cin>>arr4[i];
    }
    }
        else{
        for(int i=total;i<total+value;i++){
        cout<<"enter data of student "<<i+1<<":"<<endl;
        cout<<"enter name:";
        cin>>arr1[i];
        cout<<"enter ID:";
        cin>>arr2[i];
        cout<<"enter course:";
        cin>>arr3[i];
        cout<<"enter contact:";
        cin>>arr4[i];
    }
        total=total+value;
        
        }
}
void show(){
    for(int i=0;i<total;i++){
        cout<<"data of student"<<i+1<<":"<<endl;
        cout<<"name:"<<arr1[i]<<endl;
        cout<<"ID:"<<arr2[i]<<endl;
        cout<<"Course:"<<arr3[i]<<endl;
        cout<<"contact:"<<arr4[i]<<endl;
    }
}
void search(){
    string rollno;
    cout<<"Enter ur roll no:"<<endl;
    cin>>rollno;
    for(int i=0;i<total;i++){
    if(rollno==arr2[i]){
        cout<<"data of student"<<i+1<<":"<<endl;
        cout<<"name:"<<arr1[i]<<endl;
        cout<<"ID:"<<arr2[i]<<endl;
        cout<<"Course:"<<arr3[i]<<endl;
        cout<<"contact:"<<arr4[i]<<endl;
    }
}
}
void update(){
    string rollno;
    cout<<"Enter ur roll no:"<<endl;
    cin>>rollno;
    for(int i=0;i<total;i++){
    if(rollno==arr2[i]){
        cout<<"Previous data of the student:"<<endl;
        cout<<"data of student"<<i+1<<":"<<endl;
        cout<<"name:"<<arr1[i]<<endl;
        cout<<"ID:"<<arr2[i]<<endl;
        cout<<"Course:"<<arr3[i]<<endl;
        cout<<"contact:"<<arr4[i]<<endl;
        cout<<"enter the new data:"<<endl;
        cout<<"name:";
        cin>>arr1[i];
        cout<<"Id:";
        cin>>arr2[i];
        cout<<"Course:";
        cin>>arr3[i];
        cout<<"Contact:";
        cin>>arr4[i];
        
    }
}
}
void exit(){
    cout<<"End of code"<<endl;
    exit(0);
    
}

int main(){
    int choice;
    while(true){
    cout<<"--Student management system--"<<endl;
    cout<<"press 1 to enter"<<endl;
    cout<<"press 2 to show"<<endl;
    cout<<"press 3 to search"<<endl;
    cout<<"press 4 to update"<<endl;
    cout<<"press 5 to exit"<<endl;
    cout<<"enter ur choice:";
    cin>>choice;
    switch(choice){
        case 1:
        enter();
        break;
        case 2:
        show();
        break;
        case 3:
        search();
        break;
        case 4:
        update();
        break;
        case 5:
        exit();
        break;
        default:
        cout<<"Invalid input"<<endl;
        break;
    }
    }   
    return 0;
    
}