#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms=0, Qjollof=0, Qplainrice=0, Qcake=0, Qfrice=0, Qfmeat=0;
    //Food items sold
    int Srooms=0,Sjollof=0, Splainrice=0, Scake=0, Sfrice=0, Sfmeat=0;
    //Total price of items
    int Total_rooms=0, Total_jollof=0, Total_plainrice=0, Total_cake=0, Total_frice=0, Total_fmeat=0;



    cout<<"\n\n\t\t\t QUANTITY OF ITEMS WE HAVE";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of Jollof: ";
    cin>>Qjollof;
    cout<<"\n Quantity of Plain-rice: ";
    cin>>Qplainrice;
    cout<<"\n Quantity of Fried-rice with egg: ";
    cin>>Qfrice;
    cout<<"\n Quantity of Cake: ";
    cin>>Qcake;
    cout<<"\n Quantity of Fried Meat: ";
    cin>>Qfmeat;

    m:
    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Jollof";
    cout<<"\n3) Plain-rice";
    cout<<"\n4) Cake";
    cout<<"\n5) frice";
    cout<<"\n6) Fried Meat";
    cout<<"\n7) Information regarding sales and collection ";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        cout<<"n\n Enter the number of rooms you want: ";
        cin>>quant;
        if(Qrooms-Srooms >=quant)
        {
           Srooms=Srooms+quant;
            Total_rooms=Total_rooms+(quant*2000);
            cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
        }
        else
            cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel ";
            break;

    case 2:
        cout<<"n\n Enter number of plate(s) needed: ";
        cin>>quant;

        if(Qjollof-Sjollof >=quant)
        {
            Sjollof=Sjollof+quant;
            Total_jollof=Total_jollof+(quant*250);
            cout<<"\n\n\t\t"<<quant<<"Jollof rice is the order! ";
        }
        else
            cout<<"\n\tOnly"<<Qjollof-Sjollof<<"Number of plate(s) left in the hotel ";
            break;

            case 3:
        cout<<"n\n Enter number of plate of Plain-rice :";

        cin>>quant;
        if(Qplainrice-Splainrice >=quant)
        {
            Splainrice=Splainrice+quant;
            Total_plainrice=Total_plainrice+(quant*250);
            cout<<"\n\n\t\t"<<quant<<"Plain-rice is the order! ";
        }
        else

            cout<<"\n\tOnly"<<Qplainrice-Splainrice<<"Number of plates of Plain-rice left in the hotel ";
            break;


        case 4:
        cout<<"n\n Enter number of plate of cake :";

        cin>>quant;
        if(Qcake-Scake >=quant)
        {
            Scake=Scake+quant;
            Total_cake=Total_cake+(quant*100);
            cout<<"\n\n\t\t"<<quant<<"Cake is the order! ";
        }
        else

            cout<<"\n\tOnly"<<Qcake-Scake<<"Plate(s) of cake remaining in the hotel ";
            break;


             case 5:
        cout<<"n\n Enter number of plate of Fried-rice needed :";

        cin>>quant;
        if(Qfrice-Sfrice >=quant)
        {
            Sfrice=Sfrice+quant;
            Total_frice=Total_frice+(quant*120);
            cout<<"\n\n\t\t"<<quant<<"Fried-rice is the order! ";
        }
        else

            cout<<"\n\tOnly"<<Qfrice-Sfrice<<"Plate(s) of Fried-rice remaining in the hotel ";
            break;


             case 6:
        cout<<"n\n Enter number of plate of Fried Meat needed :";

        cin>>quant;
        if(Qfmeat-Sfmeat >=quant)
        {
            Sfmeat=Sfmeat+quant;
            Total_fmeat=Total_fmeat+(quant*150);
            cout<<"\n\n\t\t"<<quant<<"Fried Meat is the order! ";
        }
        else

            cout<<"\n\tOnly"<<Qcake-Scake<<"Number of plates of Fried Meat left in the hotel ";
            break;


             case 7:

                cout<<"\n\t\tDetails of sales and collection ";
                cout<<"\n\n Number of rooms we had : "<<Qrooms;
                cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
                cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
                cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;


                cout<<"\n\n Plate(s) of Jollofs we had : "<<Qjollof;
                cout<<"\n\n Plate(s) of Jollofs we sold "<<Sjollof;
                cout<<"\n\n Remaining number of plate of Jollofs : "<<Qjollof-Srooms;
                cout<<"\n\n Total Jollof collection for the day : "<<Total_jollof;


                cout<<"\n\n Plate(s) of Plain-rice we had : "<<Qplainrice;
                cout<<"\n\n Plate(s) of Plain-rice we sold "<<Splainrice;
                cout<<"\n\n Remaining number of plate of Plain-rice : "<<Qplainrice-Splainrice;
                cout<<"\n\n Total Plain-rice collection for the day : "<<Total_plainrice;


                cout<<"\n\n Plate(s) of cake we had : "<<Qcake;
                cout<<"\n\n Plate(s) of cake we sold "<<Scake;
                cout<<"\n\n Remaining of plate of Cake : "<<Qcake-Scake;
                cout<<"\n\n Total Cake collection for the day : "<<Total_cake;


                cout<<"\n\n Plate(s) of Fried-rice we had : "<<Qfrice;
                cout<<"\n\n Plate(s) of Fried-rice we sold "<<Sfrice;
                cout<<"\n\n Remaining of plate of Fried-rice : "<<Qfrice-Sfrice;
                cout<<"\n\n Total Fried-rice collection for the day : "<<Total_frice;


                cout<<"\n\n Plate of Fried Meat we had : "<<Qfmeat;
                cout<<"\n\n Plate of Fried Meat we sold "<<Sfmeat;
                cout<<"\n\n Remaining of Fried Meat : "<<Qfmeat-Sfmeat;
                cout<<"\n\n Total Fried Meat collection for the day : "<<Total_fmeat;

                cout<<"\n\n\n Total collection for the day: "<<Total_rooms+Total_plainrice+Total_cake+Total_jollof+Total_frice;
                break;

             case 8:

             return(0);
             default:
                cout<<"\n Please select the numbers mentioned above!";

    }
                goto m;



}

