#include "phonebook.hpp"

 void contact::set_name(std::string a)
        {
            this->fname =a;
        }
 void contact::set_lname(std::string b)
        {
            this->lname = b;
        }
     void contact::set_nickname(std::string nickname)
        {
            this->nickname = nickname;
        }
    void contact::set_phonenumber(std::string phonenumber)
        {
            this->phonenumber = phonenumber;
        }
     void contact::set_darkestsecret(std::string darkestsecret)
        {
            this->darkestsecret = darkestsecret;
        }
      std::string contact::get_name()
        {
            return fname;
        }
     std::string contact::get_lname()
        {
            return lname;
        }

           std::string contact::get_phone()
        {
            return phonenumber;
        }

           std::string contact::get_darkestsecret()
        {
            return darkestsecret;
        }

           std::string contact::get_nickname()
        {
            return nickname;
        }
    
void printtext(){
  
        std::cout << " ___________________________________________ " << std::endl;
	    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	    std::cout << "|----------|----------|----------|----------|" << std::endl;
    
}

void print(std::string str)
{
    int size = str.length();
    int i = 0;

    if(size >= 10)
    {
        str.resize(10);
        str[9] = '.';
        std::cout << str;
    }
    else 
     {
            i = 10 - size;
            while (i--)
                std::cout << " ";
            std::cout << str;
    }
        
}
phonebook::phonebook()
    { 
        index =0;
    }

  void phonebook::get()
    {
        int i = 0;
        printtext();
        while (i < index)
        {
              std::cout<< "|";
                    std::cout<< "         " << i+1;

            std::cout<< "|";
           print(arr[i].get_name()) ;
            std::cout<< "|" ;
            print(arr[i].get_lname()) ;
            std::cout<<"|" ;
           print(arr[i].get_nickname());
                 std::cout<<"|" ;

            std::cout << std::endl;
           std::cout<< "|----------|----------|----------|----------|"<< std::endl ;
            i++;
        }
    }

    void phonebook::get(int i)
    {
        if(arr[i].get_name() == "")
            std::cout << "this contact is not found " << std::endl;
        else {
            std::cout << "FirstNAME :" << arr[i].get_name() << std::endl;
            std::cout << "LastName :" << arr[i].get_lname() << std::endl;
            std::cout << "Nickname :" << arr[i].get_nickname() << std::endl;
            std::cout << "Phonenumber :" << arr[i].get_phone() << std::endl;
            std::cout << "DarkestSecret :" << arr[i].get_darkestsecret() << std::endl;
        }
    }

        void phonebook::add(contact cont)
    {
        if(index+1 > 8)
            index = 7;

        arr[index++] = cont;
        std::cout << "this Contact is added succesfully in phonebook" << std::endl;
    }
