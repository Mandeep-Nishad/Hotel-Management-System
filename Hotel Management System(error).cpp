#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;

    //Qunatity
    int Qrooms=0, Qpasta=0, Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;

    //Food items sold
    int Srooms=0,Spasta=0,Sburger=0,Sshake=0,Schicken=0,Snoodles=0;

    //Total price of items
    int Total_rooms=0, Total_pasta=0,Total_burger=0, Total_noodles=0,Total_shake=0,Total_chicken=0;
    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n\t Quantity of pasta";
    cin>>Qpasta;
    cout<<"\n\t Quantity of burger";
    cin>>Qburger;
    cout<<"\n\t Quantity of noodles";
    cin>>Qnoodles;
    cout<<"\n\t Quantity of shake";
    cin>>Qshake;
    cout<<"\n\t Quantity of chicken-roll";
    cin>>Qchicken;

    n:
    cout<<"\n\t\t\t Please select from the menu options";
    cout<<"\n\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Burger";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) Shake";
    cout<<"\n 6) chicken-roll";
    cout<<"\n 7) Information regarding sales and collection ";
    cout<<"\n 8) Exit";

    cout<<"\n\n Please enter your choice! ";;
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\n Enter the number of rooms you want: ";
            cin>>quant;
            if(Qrooms-Srooms>=quant)
            {
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+quant*1200;
                cout<<"\n\n\t\t"<<quant<<"rooms have been alloted to you!";
            }
            else{
                cout<<"\n\t only"<<Qrooms-Srooms<<"Rooms remaining in hotel ";
                break;
            }
        case 2:
            cout<<"\n\n Enter the Pasta Quantity: ";
            cin>>quant;
            if(Qpasta-Spasta>=quant)
            {
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+quant*250;
                cout<<"\n\n\t\t"<<quant<<"Pasta is the order!";
            }
            else{
                cout<<"\n\t only"<<Qpasta-Spasta<<"Pasta remaining in hotel ";
                break;
            }
        case 3:
            cout<<"\n\n Enter the burger Quantity: ";
            cin>>quant;
            if(Qburger-Sburger>=quant)
            {
                Sburger=Sburger+quant;
                Total_burger=Total_burger+quant*120;
                cout<<"\n\n\t\t"<<quant<<"Burger is the order!";
            }
            else{
                cout<<"\n\t only"<<Qburger-Sburger<<"Burger remaining in hotel ";
                break;
            }
        case 4:
            cout<<"\n\n Enter the noodles Quantity: ";
            cin>>quant;
            if(Qnoodles-Snoodles>=quant)
            {
                Snoodles=Snoodles+quant;
                Total_noodles=Total_noodles+quant*250;
                cout<<"\n\n\t\t"<<quant<<"Noodles is the order!";
            }
            else{
                cout<<"\n\t only"<<Qnoodles-Snoodles<<"Noodles remaining in hotel ";
                break;
            }

        case 5:
            cout<<"\n\n Enter the Shakes Quantity: ";
            cin>>quant;
            if(Qshake-Sshake>=quant)
            {
                Sshake=Sshake+quant;
                Total_shake=Total_shake+quant*120;
                cout<<"\n\n\t\t"<<quant<<"Shake is the order!";
            }
            else{
                cout<<"\n\t only"<<Qshake-Sshake<<"Shake remaining in hotel ";
                break;
            }

        case 6:
            cout<<"\n\n Enter the chicken-roll Quantity: ";
            cin>>quant;
            if(Qchicken-Schicken>=quant)
            {
                Schicken=Schicken+quant;
                Total_chicken=Total_chicken+quant*150;
                cout<<"\n\n\t\t"<<quant<<"Chicken is the order!";
            }
            else{
                cout<<"\n\t only"<<Qchicken-Schicken<<"Chicken remaining in hotel ";
                break;
            }
        case 7:
            cout<<"\n\n Details of sales and collection ";

            cout<<"\n\n Number of rooms we had: "<<Qrooms;
            cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
            cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
            cout<<"\n\n Total rooms collections for the day: "<<Total_rooms;

            cout<<"\n\n Number of Pastas we had: "<<Qpasta;
            cout<<"\n\n Number of Pastas we sold: "<<Spasta;
            cout<<"\n\n Remaining Pastaa : "<<Qpasta-Spasta;
            cout<<"\n\n Total Pastas collections for the day: "<<Total_pasta;

            cout<<"\n\n Number of burger we had: "<<Qburger;
            cout<<"\n\n Number of burger we sold: "<<Sburger;
            cout<<"\n\n Remaining burger : "<<Qburger-Sburger;
            cout<<"\n\n Total burger collections for the day: "<<Total_burger;

            cout<<"\n\n Number of noodles we had: "<<Qnoodles;
            cout<<"\n\n Number of noodles we sold: "<<Snoodles;
            cout<<"\n\n Remaining nooldles : "<<Qnoodles-Snoodles;
            cout<<"\n\n Total noodles collections for the day: "<<Total_noodles;

            cout<<"\n\n Number of shake we had: "<<Qshake;
            cout<<"\n\n Number of shake we sold: "<<Sshake;
            cout<<"\n\n Remaining shake : "<<Qshake-Sshake;
            cout<<"\n\n Total shake collections for the day: "<<Total_shake;

            cout<<"\n\n Number of chicken-roll we had: "<<Qchicken;
            cout<<"\n\n Number of chicken-roll we sold: "<<Schicken;
            cout<<"\n\n Remaining chicken-roll : "<<Qchicken-Schicken;
            cout<<"\n\n Total chicken-roll collections for the day: "<<Total_chicken;

            cout<<"\n\n Total Collections for the day: "<<Total_rooms+Total_pasta+Total_noodles+Total_burger+Total_chicken+Total_shake;
            break;

        case 8:
            exit(0);

        default:
            cout<<"Please select the numbers mentioned above!";
    }
    goto n;
}
