#include<iostream>
using namespace::std;

main()
{
    int n,j,e,temp;
    float total=0,total2,macam,jumlah,harga1,harga[20];
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
            cout<<"Harganya :";cin>>harga1;
            cout<<"Jumlahnya :";cin>>jumlah;
            total=total+harga1*jumlah;
            cout<<"======================\n";
            cout<<endl;
        }
        for(e=1;e<macam;++e)
            for(j=0;j<(macam-e);++j)
            {
                if(harga[j]>harga[j+1])
                {
                    temp=harga[j];
                    harga[j]=harga[j+1];
                    harga[j+1]=temp;
                }
            }
        cout<<"Daftar Urut Belanjaan :";
        for(e=0;e<macam;++e)
        {
            cout<<" "<<harga[e]<<endl;
        }
        cout<<"Totalnya :"<<total;
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
            cout<<"Harganya :";cin>>harga1;
            cout<<"Jumlahnya :";cin>>jumlah;
            total=total+harga1*jumlah;
            cout<<"======================\n";
            cout<<endl;
        }
            for(e=1;e<macam;++e)
            for(j=0;j<(macam-e);++j)
            {
                if(harga[j]>harga[j+1])
                {
                    temp=harga[j];
                    harga[j]=harga[j+1];
                    harga[j+1]=temp;
                }
            }
        cout<<"Daftar Urut Belanjaan :";
        for(e=0;e<macam;++e)
        {
            cout<<" "<<harga[e]<<endl;
        }
        cout<<"Total Belanja :"<<total<<endl;
    }
    cout<<"\n===== Terimakasih Telah Belanja diMinimarket Super Market Kami =====\n";return 0;
}
