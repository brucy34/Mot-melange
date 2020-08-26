#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string melangerLettres(string mot)
{
  string melange;
  int position(0);

  while (mot.size()!= 0)
  {
      position=rand()% mot.size();
      melange +=mot[position];
      mot.erase(position,1);
  }
  return melange;

}
int main()
{
    string motMystere,motMelange,reponse;

    srand(time(0));

    cout <<"Entrez un mot"<<endl;
    cin >>motMystere;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    motMelange=melangerLettres(motMystere);

    while(reponse!=motMystere)
    {
      cout <<"Quel est le mot mystere?"<< motMelange<<endl;
      cin >>reponse;

      if (reponse==motMystere)
      {
          cout <<endl<<"C'est la bonne reponse!!!"<<endl;
      }
      else
      {
          cout <<"Ce n'est pas la reponse!!"<<endl;

      }

    }

     return 0;
}


