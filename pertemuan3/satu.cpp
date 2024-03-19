#include <iostream>
using namespace std;
int main()
{
    int nilai;
//     cout << "masukaan nilai: ";
//     cin >> nilai;
//     // if (nilai == 100)
//     // {
//     //     cout << "anda HEBAT";
//     // }
//     // else if (nilai <= 65){
//     //     cout << "anda TIDAK LULUS " <<endl;
//     // }
//     // else {
//     //     cout << "and LULUS" << endl;
//     // }
//     if (nilai <= 65){
//         cout << "anda TIDAK LULUS" << endl;

//     }else {
//         if (nilai == 100){
//             cout << "anda LULUS dan Anda HEBAT" << endl;        
//     }else {
//         cout << "anda LULUS"<< endl;
//     }
 
// }
cout << "masukkan nilai" ;
    cin >> nilai;
// switch (nilai)
// {
    
//     // case 1:
//     // cout << "senin"<<endl;
//     // break;
//     // case 2:
//     // cout << "selasa"<<endl;
//     // break;
//     // case 3:
//     // cout << "Rabu"<<endl;
//     // break;
//     // case 4:
//     // cout << "Kamis"<<endl;
//     // break;
//     // case 5:
//     // cout << "jumat"<<endl;
//     // break;
//     // case 6:
//     // cout << "sabtu"<<endl;
//     // break;
//     // case 7:
//     // cout << "minggu"<<endl;
//     // break;
//     // default : cout << "inputan tidak valid"<<endl;
//     // break;
//     case 85 ... 100:
//     cout << "B+" << endl;
//     break;

//     case 80 ... 84 :
//     cout << "B" << endl;
//     break;

//     case 75 ... 79 :
//     cout << "C+" << endl;
//     break;

//     case 70 ... 74 :
//     cout << "C" << endl;
//     break;

//     case 65 ... 69:
//     cout << "D" << endl;
//     break;

//     default:
//     cout << "E" << endl;
//     break;
// }

string checkNum = (nilai % 2 == 0) ? "genap" : "ganjil";
cout << nilai << "adalah bilangan " << checkNum <<endl ;

}