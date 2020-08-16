# include <iostream>
using namespace std;
void end()
{cout<<"\n You Entered y \n";
cout<<"\n The program is ending !\n";
cout<<"\n Thank you for playing\n";
cout<<"\n Press any key to exit\n"; }

void play()
{ void q2();
int i ;
char j;
cout<<"\n Your first question is-\n";
cout<<"\n Which is the capital of Maharashtra?\n";
cout<<"\n 1) Delhi"<<"\t"<<" 2) Mumbai\n";
cout<<"\n 3) Ranchi"<<"\t"<<" 4) Goa \n";
cin>>i;
if(i==2)
{cout<<"\n You win Rs 1000\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{
end();}
else
{
q2();}
}
else
{
cout<<"\n Try Again\n";
play();
}
}

void q2()
{void q3();
int i;
char j;
cout<<"\n Your secound question for Rs 2000 is:-\n";
cout<<"\n The first Prime Minister of India was-\n";
cout<<"\n 1). P.L.Shastri" <<"\t"<<" 2). Indira Gandhi\n";
cout<<"\n 3). Motilal Nehru"<<"\t"<<" 4). J.N.Nehru\n";
cin>>i;
if(i==4)
{cout<<"\n You win Rs 2000\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n ";
cin>>j;
if(j=='y')
{
end();}
else
{
q3();}
}
else
{cout<<"\n Try Again\n";
play();
} }
void q3()
{void q4();
int i;
char j;
cout<<"\n Your next question for Rs 5000 is:-\n";
cout<<"\n Who is the Father of Yuvraj Sigh?\n";
cout<<"\n 1). Yograj Singh"<<"\t"<<" 2).B.S.Bedi\n";
cout<<"\n 3). Lovely Singh"<<"\t"<<" 4). G.Vishwanath\n";
cin>>i;
if(i==1)
{cout<<"\n Congratulations ! You win Rs 5000\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{
end();}
else
{
q4();}
}
else
{cout<<"\n Try Again\n";
play();
} }
void q4()
{ int i;
char j;
void q5();
cout<<"\n Your next question for Rs 10000 is-\n";
cout<<"\n The first women Prime Minister of India is-\n";
cout<<"\n 1). Sonia Gandhi "<<"\t"<<" 2).Indira Gandhi\n";
cout<<"\n 3). Shushma Swaraj"<<"\t"<<" 4).Annie Besent \n";
cin>>i;
if(i==2)
{cout<<"\n Congratulations ! You win Rs 10000\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{
end();}
else
{
q5();}
}
else
{cout<<"\n Try Again\n";
play();
} }
void q5()
{
void q6();
int i;
char j;
cout<<"\n Your next question for Rs 20,000 is -\n";
cout<<"\n Which is the currency of Pakistan ?\n";
cout<<"\n 1). Rouble"<<"\t"<<" 2). Rupee\n";
cout<<"\n 3). Peso "<<"\t"<<" 4). Pakistani Rupee\n";
cin>>i;
if(i==2)
{cout<<"\n Congratulations ! You win Rs 20,000\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{
end();}
else
{
q6();}
}
else
{cout<<"\n Try Again\n";
play();
}}
void q6()
{ int i;
char j;
void q7();
cout<<"\n Your next qustion for Rs 50,000 is-\n";
cout<<"\n The older name of Sri Lanka was?\n";
cout<<"\n 1). Lanka "<<"\t"<<" 2). Ceylon \n";
cout<<"\n 3). Babylon"<<"\t"<<" 4). Malawi\n";
cin>>i;
if(i==2)
{cout<<"\n Congratulations ! You win Rs 50,000\n";
cout<<"\n Pres Any key to continue \n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{
end();}
else
{
q7();}
}
else
{cout<<"\n Try Again\n";
play();
}
}
void q7()
{void q8();
int i;
char j;
cout<<"\n Your next question for Rs 1,20,000 is-\n";
cout<<"\n The Painter of the famous painting of ' MONALISA ' is?\n";
cout<<"\n 1). Columbus "<<"\t"<<" 2). Alexander \n";
cout<<"\n 3). Holmes "<<"\t"<<" 4). Leonardo da vinci\n";
cin>>i;
if(i==4)
{cout<<"\n Congratulations ! You win Rs 1,20,000\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{
end();}
else
{
q8();}
}
else
play();
}
void q8()
{void q9();
int i;
char j;
cout<<"\n Your next question for Rs 2,40,000 is--\n";
cout<<"\n The H.Q. of UNICEF is located at?\n";
cout<<"\n 1).New York "<<"\t"<<" 2). Geneva \n";
cout<<"\n 3).Dubai "<<"\t"<<" 4). Berlin \n";
cin>>i;
if(i==2)
{cout<<"\n Congratulations ! You win Rs 2,40,000\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{
end();}
else
{
q9();}
}
else
{cout<<"\n Try Again\n";
play();
}}
void q9()
{void q10();
int i;
char j;
cout<<"\n Your next question for Rs 3,60,000 is--\n";
cout<<"\n The First Governar General of Free India was ?\n";
cout<<"\n 1). Joseph Simon "<<"\t"<<" 2). H.Rodrigues \n";
cout<<"\n 3). Warren Hastings"<<"\t"<<" 4). Lord Mountbatten\n";
cin>>i;
if(i==4)
{cout<<"\n Congratulations ! You win Rs 3,60,000\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{
end();}
else
{
q10();}}
else
{cout<<"\n Try Again\n";
play();
}
}
void q10()
{void q11();
int i;
char j;
cout<<"\n Your next question for Rs 7,20,000 is---\n";
cout<<"\n The Historic 'Trojan War' was fought between?\n";
cout<<"\n 1). Italy and Arab "<<"\t"<<" 2). Troy and Italy \n";
cout<<"\n 3). Troy and Greece "<<"\t"<<" 4). Greece and Italy\n";
cin>>i;
if(i==3)
{cout<<"\n Congratulations ! You win Rs 7,20,000\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{
end();}
else
{
q11();}}
else
{cout<<"\n Try Again\n";
play();
}
}
void q11()
{void q12();
int i;
char j;
cout<<"\n Your next question for Rs 12,50,000 is--\n";
cout<<"\n The historic day when man entered the space was\n ";
cout<<"\n 1). 12th April 1961 "<<"\t"<<" 2). 26th May 1964\n";
cout<<"\n 3). 9th August 1957 "<<"\t"<<" 4). 1st December 1958\n";
cin>>i;
if(i==1)
{cout<<"\n Congratulations ! You win Rs 12,50,000\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{
end();}
else
{
q12();}}
else
{cout<<"\n Try Again\n";
play();
}
}
void q12()
{void q13();
int i;
char j;
cout<<"\n Your next question for Rs 25,00,000 is --\n";
cout<<"\n The title of 'Mahatma' was given to Ghandi Ji by?\n";
cout<<"\n 1). Queen Elizabeth "<<"\t"<<" 2). Rabindranath Tagore \n";
cout<<"\n 3). Lord Mountbatten "<<"\t"<<" 4). Nelson Mandela \n";
cin>>i;
if(i==2)
{cout<<"\n Congratulations ! You win Rs 25,00,000\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{
end();}
else
{
q13();}}
else
{cout<<"\n Try Again\n";
play();
}
}
void q13()
{ void life();
void q14();
int i,j;
char k;
cout<<"\n Your nxt question for Rs 50,00,000 is ---\n";
cout<<"\n The Oldest living creature on the Earth is ?\n";
cout<<"\n 1). Plyctyomos "<<"\t"<<" 2). Horseshoe Crab \n";
cout<<"\n 3). Plasmodium "<<"\t"<<" 4). Tortoise \n";
cout<<"\n ------ ATTENTION ------\n";
cout<<"\n Do you want to use your lifelines?Press y for yes or press any key for no\n";
cin>>k;
if(k=='y')
{life();}
else
{
cout<<"\n Enter your choice to be locked-\n";
cin>>i;
if(i==2)
{cout<<"\n Congratulations ! You win Rs 50,00,000 !!! \n";
cout<<"\n The moment has come when you are going to be one of the Billioneres !!!!!\n";
cout<<"\n You are just a step behind this great milestone !!!!\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{
end();}
else
{
q14();}}
else
{cout<<"\n Try Again\n";
play();
}}
}
void q14()
{int i;
cout<<"\n Your last question for Rs 1,00,00,000 ! is\n";
cout<<"\n The author of this Game is ?\n";
cout<<"\n 1). Amitabh Bachchan "<<"\t"<<" 2). Shahrukh Khan \n";
cout<<"\n 3). Navneet Gautam "<<"\t"<<" 4). Sony Channel \n";
cin>>i;
if(i==3)
{cout<<"\n ******** *** ** Congratulations ! You win Rs 1,00,00,000 ** *** ********\n";
cout<<"\n ******** ** You has become the Lucky player to achieve this feet ** ******\n";
cout<<"\n ***** **** *** ** Thank You for Playing ** *** **** *****\n";
cout<<"\n *** *** **** ** Pres Any key to Exit ! ** **** *** *** \n";
}
else
{cout<<"\n Try Again\n";
play();
}
}
void life()
{char i,j;
int m,l;
cout<<"\n Your life lines are a).50-50"<<"\t"<<" b). another question\n";
cin>>i;
if(i=='a')
{cout<<"\n Your reducd options are ---\n";
cout<<"\n 1). Plyctyomos "<<"\t"<<" 2). Horseshoe Crab \n";
cout<<"\n Ente your choice--\n";
cin>>l;
if(l==2)
{cout<<"\n Congratulations ! You win Rs 50,00,000 !!! \n";
cout<<"\n The moment has come when you are going to be one of the Billioneres !!!!!\n";
cout<<"\n You are just a step behind this great milestone !!!!\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{end();}
else
{
q14();}}
else
{if(l==1)

{cout<<"\n Try Again\n";
play();}

else
{cout<<"Wrong Input\n";
life();}
} }
else
{if(i=='b')
{
cout<<"\n Your changed question for Rs 50,00,000 is---\n";
cout<<"\n 1). Athens,Greece "<<"\t"<<" 2). Montreal,Canada \n";
cout<<"\n 3). Sydney,Australia "<<"\t"<<" 4). Los Angeles,U.S.A \n";
cin>>m;
if(m==1)
{cout<<"\n Congratulations ! You win Rs 50,00,000 !!! \n";
cout<<"\n The moment has come when you are going to be one of the Billioneres !!!!!\n";
cout<<"\n You are just a step behind this great milestone !!!!\n";
cout<<"\n Pres Any key to continue\n";
cout<<"\n Do you want to exit? If yes then press y else press other key .\n";
cin>>j;
if(j=='y')
{
end();}
else
{
q14();}}
else
{cout<<"\n Try Again\n";
play();
}}
else
{cout<<"\n Wrong input";
life();}
}}

int main()
{ 
cout<<"\n *********"<<"\t"<<"Welcome to Kaun Banega Crorepati"<<"\t"<<"********\n";
cout<<"\n *********"<<"\t"<<"You have to try again if you fail"<<"\t"<<"********\n";
play();
}