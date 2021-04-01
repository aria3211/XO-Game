
#include <iostream>
#include <stdlib.h>

using namespace std;





char list[10] = {'o','1','2','3','4','5','6','7','8','9'};
int check_winer();
void Template()
{
  
  cout << "Player1 is X and Player2 is O "<<'\n';
  std::cout <<'\n';
  std::cout <<   list[1]  <<" | " <<list[2] <<" | "<<  list[3] << '\n';
  std::cout << "-----------" <<'\n';
  std::cout <<   list[4] << " | " <<list[5] <<" | " << list[6]  << '\n';
  std::cout << "-----------" <<'\n';
  std::cout <<   list[7] << " | "<< list[8]<< " | "<<  list[9]  <<'\n';
  cout <<endl <<"This is a Template" << '\n';

}


int main()
{
  int player = 1,chois,i;
  char select;
  bool t = true;
  char status;
  while(t)
  {
    std::cout << "1)play  2)Exit : ";
    cin >> status;
    if (status=='2')
    {
      t = false;
      cout << "Exiting...";
      break;
    }
  else
  {

  do {


    Template();
    player = (player%2)?1:2;

    cout << "Player" << player << ", enter a number: ";
    cin >> chois;
    select = (player == 1) ? 'X':'O';
    if (chois == 1 && list[1] == '1')
    {
      list[1] = select;
    }
    else if(chois == 2 && list[2] == '2')
    {
      list[2] = select;
    }
    else if(chois ==3 && list[3] == '3')
    {
      list[3] = select;
    }
    else if(chois == 4 && list[4]=='4')
    {
      list[4] = select;
    }
    else if(chois == 5 && list[5] == '5')
    {
      list[5] = select;
    }
    else if(chois == 6 && list[6] == '6')
    {
      list[6] = select;
    }
    else if(chois == 7 && list[7] == '7')
    {
      list[7] = select;
    }
    else if(chois == 8 && list[8] == '8')
    {
      list[8] = select;
    }
    else if(chois == 9 && list[9] == '9')
    {
      list[9] = select;
    }
    else
    {
      cout << "Error";
      player--;

    }
    i = check_winer();
    player++;



  } while(i==-1);
  Template();
  if(i==1)
  {
    cout << "==>\a Player"<<--player<<" win " << endl;
  }
  else
  {
    cout << "==>\aGame draw" << endl;
  }
}
}
}
int check_winer()
{
  if(list[1]==list[2]&&list[2]==list[3])
  {
    return 1;
  }
  else if(list[4]==list[5] && list[5]==list[6])
  {
    return 1;
  }

  else if(list[7] == list[8] && list[8]==list[9])
  {
    return 1;
  }
  else if(list[1]==list[4] && list[4]==list[7])
  {
    return 1;
  }
  else if(list[2]==list[5]&&list[5]==list[8])
  {
    return 1;
  }
  else if(list[3]==list[6]&&list[6]==list[9])
  {
    return 1;
  }
  else if(list[1]==list[5]&&list[5]==list[9])
  {
    return 1;
  }
  else if(list[3] == list[5] && list[5] == list[7])
  {
    return 1;
  }
  else if(list[1] != '1' && list[2] != '2' && list[3]!='3' && list[4] != '4' && list[5]!='5'&&list[6]!='6'&&list[7] != '7'&&list[8] != '8'&&list[9] != '9')
  {
    return 0;
  }
  else
  {
    return -1;
  }

}
