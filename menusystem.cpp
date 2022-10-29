#include<iostream>
using namespace std;
int main(){
    int orders,no_deals;
    cout<<"|---------MENU---------|"<<endl;
    
    cout<<"(1)   chicken biryani        $2 only"<<endl;
    cout<<"(2)   pizza                  $1.5 only"<<endl;
    cout<<"(3)   burger                 $0.5 only"<<endl;
    cout<<"enter your order number="<<endl;
    cin>>orders;
    cout<<"enter your number of deals="<<endl;
    cin>>no_deals;
    if(orders==1){
        cout<<"order: chicken biryani"<<endl;
        cout<<"number of deals:"<<no_deals<<endl;
        cout<<"price of each deal: $2only"<<endl;
        cout<<"total price:"<<"$"<<no_deals*2<<endl;

        cout<<"-----thanks for coming-----"<<endl;
    }
    else if(orders==2){
        cout<<"order: pizza"<<endl;
        cout<<"number of deals:"<<no_deals<<endl;
        cout<<"price of each deal: $1.5only"<<endl;
        cout<<"total price:"<<"$"<<no_deals*1.5<<endl;

        cout<<"-----thanks for coming-----"<<endl;
    }
    else{
        cout<<"order: burger"<<endl;
        cout<<"number of deals:"<<no_deals<<endl;
        cout<<"price of each deal: $0.5only"<<endl;
        cout<<"total price:"<<"$"<<no_deals*0.5<<endl;

        cout<<"-----thanks for coming-----"<<endl;
    }
    return 0;
}