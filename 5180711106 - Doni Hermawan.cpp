#include<iostream>
using namespace::std;

main()
{
    float total=0,total2,macam,jumlah,harga;
    char member;
    string namaku,jenis,cari,nama2;
    string nomor[5]={"A001","A002","A003","A007","A008"};
    string nama[5]={"Bayu","Irvan","Susiati","Diana","Roni"};

    cout<<"===== Selamat Datang diMinimarket Super Market =====\n\n";
    cout<<"Apakah Anda Member ? <Y/T> :";cin>>member;
    if (member=='y'||member=='Y')
    {
        cout<<"Cari Nomor Identitas Anda :";cin>>cari;cout<<endl;
        for(int i=0;i<5;i++)
        {
            if(cari==nomor[i])
            {
                namaku=nama[i];
            }
        }
            cout<<"ID Anda :"<<cari<<endl;
            cout<<"Nama Anda :"<<namaku<<endl<<endl;
            cout<<"Jumlah Macam Barang yang akan Anda Beli :";cin>>macam;cout<<endl;
        for(int i=0;i<macam;i++)
        {
            cout<<"======================\n";
            cout<<"Jenis Barang yang diBeli :";cin>>jenis;
            cout<<"Harganya :";cin>>harga;
            cout<<"Jumlahnya :";cin>>jumlah;
            total=total+harga*jumlah;
            cout<<"======================\n";
            cout<<endl;
        }
        cout<<"\nKhusus Member ada diskon 5% :";
        total2=total*95/100;cout<<endl;
        cout<<"Total Belanja :"<<total2;
        cout<<endl;
    }
    else if(member=='t'||member=='T')
    {
        cout<<"Masukkan Nama Anda :";cin>>nama2;
        cout<<"Jumlah Macam Barang yang akan Anda Beli :";cin>>macam;cout<<endl;
        for(int i=0;i<macam;i++)
        {
            cout<<"======================\n";
            cout<<"Jenis Barang yang diBeli :";cin>>jenis;
            cout<<"Harganya :";cin>>harga;
            cout<<"Jumlahnya :";cin>>jumlah;
            total=total+harga*jumlah;
            cout<<"======================\n";
            cout<<endl;
        }
        cout<<"Total Belanja :"<<total<<endl;
    }
    cout<<"\n===== Terimakasih Telah Belanja diMinimarket Super Market Kami =====\n";
}
