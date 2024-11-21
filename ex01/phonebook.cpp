#include "phonebook.hpp"
#include <sstream>
#include <cstdlib>

contact AddtoPhonebook(std::string fname,std::string lname,std::string phone,std::string nickname ,std::string darkest)
{
    contact Aobj; 

    Aobj.set_name(fname);
    Aobj.set_lname(lname);
    Aobj.set_nickname(nickname);
    Aobj.set_phonenumber(phone);
    Aobj.set_darkestsecret(darkest);

    return Aobj;
}

static int stoi( std::string &s ) {

int i = -1;
    while (s[++i])
    {
        if(s[i] < '0' || s[i] >'9')
            return -1;
    }
    
          i = 0;
     std::istringstream(s) >> i;

    return i;
}


int main()
{

    phonebook phonebook;

    std::string str ; 
    std::string fname ;
    std::string lname ;
    std::string phoneNumber ;
    std::string nickname ;
    std::string DarkestKey;
    std::string index ;

    std::cout << "hello to your phonebook" << std::endl;

            str = ""; 
             fname  = "";
             lname = "";
             phoneNumber = "" ;
             nickname = "";
             DarkestKey = "";
             index = "";
    while ( std::cout << "ENTER UR COMMAND :" && std::getline(std::cin, str))      
    {
        if(!(str.compare("ADD")) )
        {
            while (!fname.compare("") &&  std::cout << "Enter ur firstName :" && std::getline(std::cin,fname)){}
  
           while ( fname.compare("") && !lname.compare("") && std::cout << "Enter ur LastName :"  && std::getline(std::cin,lname)){}
           
            while (lname.compare("") && !nickname.compare("") && std::cout << "Enter ur Nickname :" &&  std::getline(std::cin,nickname)){}
            
            while (nickname.compare("") && !phoneNumber.compare("") &&  std::cout << "Enter ur phone :" && std::getline(std::cin,phoneNumber)){}
            
          while ( phoneNumber.compare("") && !DarkestKey.compare("") && std::cout << "Enter ur DarkestKey :" && std::getline(std::cin,DarkestKey)){}

            if(!DarkestKey.compare(""))
                exit(1);
           phonebook.add(AddtoPhonebook(fname,lname,nickname,phoneNumber,DarkestKey)); 

            str = ""; 
             fname  = "";
             lname = "";
             phoneNumber = "" ;
             nickname = "";
             DarkestKey = "";
             index = "";

  
           continue;
           
        }
         else if(!(str.compare("SEARCH")))
         {
             phonebook.get();

            while (std::cout << "Enter ur index :" &&  getline(std::cin,index))
            {
                int num;    

                     num = stoi(index);
                       if(num > 0 && num < 9)
                {
                    phonebook.get(num-1);
                    break;
                }
                else 
                    std::cout << "index is invalid " << std::endl;

                }
    
            }
            
            else if (!str.compare("EXIT"))
            {
                std::cout << "Bye " << std::endl;
                break;
            }
                
            
    }
    
    
}