//ATM
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
    int OriginalPin={card_pin}, pin, chance=3;
    float balans={balance};
    cout << "\t\t{Name} Bankomati:\n";
k:    cout << "Pin: ";
    cin >>pin;

    if (pin==OriginalPin){
        cout << "Sistemaga kirildi\n\n";
t:    cout << "1.Balansni ko'rish\n2.Pul yechib olish\n3.Pul kiritish\n4.Pin o'zgartirish\n\n5.Dasturdan chiqish\n";

    int type;
    cin >> type;
    switch(type)
    {
        case 1: cout << "Kartangiz balansi: " << fixed <<  setprecision(2) << balans << endl; goto t;
        case 2: {
            float RemoveBalans;
            cout << "Chiqarish uchun pul miqdorini kiriting: ";
l:            cin >> RemoveBalans;
            if (RemoveBalans<0){
                    cout << "Musbat qiymat kiriting: "; goto l;}
            else if (balans>=RemoveBalans){
            cout << "Pin kodni kiriting: ";
            cin >> pin;
                if (pin==OriginalPin){
                        balans=balans-RemoveBalans;
                    cout << "Jarayon muvafaqqiyatli amalga oshirildi\nJoriy karta balansi: " << fixed << setprecision(2) << balans <<endl; goto t;
                }
                else cout << "Pin kod xato kiritildi!\n"; goto t;
            }
            else cout << "Kartangiz balansi yetarli emas!\n";
        goto t;}
        case 3: {
            cout << "Pullarni kiriting: ";
            float AddBalans;
j:            cin >> AddBalans;
            if (AddBalans<0){
                cout << "Musbat qiymat kiriting: "; goto j;
            }
            else {
            balans=balans+AddBalans;
            cout << "Pullar qabul qilindi\n Sizdagi joriy balans: "<< fixed << setprecision(2) << balans << endl; goto t;
        }}
        case 4: {
        cout << "Joriy pin kodni kiriting: ";
        cin >> pin;
        if (pin==OriginalPin)
        {
            cout << "Yangi pin kodni kiriting: ";
            int new1_pin, new2_pin;
            cin >> new1_pin;
            cout << "Qaytadan kiriting: ";
            cin >> new2_pin;

            if (new1_pin==new2_pin){
                OriginalPin=new1_pin;
                cout << "Pin muvafaqqiyatli o'zgartirildi!\nJoriy pin: " << OriginalPin << endl;
            }
            else cout << "Yangi pinlar bir-biriga mos emas!\n"; goto t;
        }
        else cout << "Pin xato kiritildi!\n\n"; goto t;
        }
        case 5: cout << "Bankimiz xizmatlaridan foydalanganingiz uchun rahmat!!!"; goto c;
        default: cout << "Aniqlanmagan buyruq kiritildi!!!\n\n"; goto t;
    }
    }
    else { cout <<
            "Pin xato\n";
       chance--;
       if (chance>0)
        goto k;
        else cout << "3 ta xato urinishlar bo'ldi.\nKarta olib qolindi. Bank ma'muriyatiga murojaat qiling!!!";
  }
c:  system("pause");
    return 0;
}
