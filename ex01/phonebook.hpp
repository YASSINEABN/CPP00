#ifndef PHONEBOOK_H
#define PHONEBOOK_H


#include <iostream>


class contact 
{
    private:
        std::string fname ;
        std::string lname;
        std::string nickname ;
        std::string phonenumber ;
        std::string darkestsecret;
        unsigned int  id;
  public:
        void set_name(std::string a);
        void set_lname(std::string b);
        void set_nickname(std::string nickname);
        void set_phonenumber(std::string phonenumber);
        void set_darkestsecret(std::string darkestsecret);

        std::string get_name();

        std::string get_lname();

           std::string get_phone();

           std::string get_darkestsecret();

           std::string get_nickname();
};



class phonebook 
{
    private:
        contact arr[8];
        int index;
    public:

    phonebook();
    void add(contact cont);

    void get();
    void get(int i);
};


#endif