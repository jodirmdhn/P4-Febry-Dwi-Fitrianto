#include <iostream>
#include <cstdlib>
using namespace std;

main (){
int nim1[14][6];
int nim2[6][14];
int jml [14][6];
int x, y;
cout<< "PENJUMLAHAN MATRIX\n";
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
cout<< "Masukkan index " << x << "," << y << " = ";
cin>> nim1[x][y];
}
}
cout<<endl;
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
cout<< "Masukkan index " << x << "," << y << " = ";
cin>> nim2[x][y];
}
}
cout<<endl;
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
jml [x][y] = nim1[x][y]+nim2[x][y];
cout<<jml [x][y] <<" ";
}
cout<<endl;
}
}
