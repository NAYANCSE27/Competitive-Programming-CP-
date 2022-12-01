void city() {
    for(int i=1; i<=500; i++) {
        if(i%7==0 and i%13==0)
            cout<<"Dhaka, Bangladesh"<<endl;
        else if(i%7==0)
            cout<<"Dhaka"<<endl;
        else if(i%13==0)
            cout<<"Bangladesh"<<endl;
        else
            cout<<i<<endl;
    }
}



