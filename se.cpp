#include<bits/stdc++.h>
using namespace std;
void currentMedication()


{

 fstream file1;
    string currentMedicine;
    file1.open("Medicine.txt", ios::app | ios::out | ios::in );

 if(file1.is_open())
    {
        cout<<"Your Current Medication::"<<endl;
        while(!file1.eof())

         {
            getline(file1, currentMedicine);
            cout<<currentMedicine<<endl;
        }
  cout<<endl;
    }
    file1.close();

}

return 0;

}
