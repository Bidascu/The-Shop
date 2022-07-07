#include <iostream>


//---------- Products -----------
class Product {
protected:
    int id;
    int weight;
    int height;
    int TDP;
    int nms;
    int memory;
    int clock_freq;

public:
    virtual void addProduct() {
    }
};

class CPU : public Product {
private:
    int cores;
    int threads;
    int socket;
public:
    void addProduct() {
        bool RUSure;
        std::cout << "Cores: " << std::endl;
        std::cin >> cores;
        std::cout << "Threads: " << std::endl;
        std::cin >> threads;
        std::cout << "Socket: " << std::endl;
        std::cin >> socket;
        std::cout << "Weight: " << std::endl;
        std::cin >> weight;
        std::cout << "Height: " << std::endl;
        std::cin >> height;
        std::cout << "TDP: " << std::endl;
        std::cin >> TDP;
        std::cout << "nms: " << std::endl;
        std::cin >> nms;
        std::cout << "Memory: " << std::endl;
        std::cin >> memory;
        std::cout << "Clock Frequency: " << std::endl;
        std::cin >> clock_freq;
        std::cout << "Add this product? \n Yes = 1 \n No = 0" << std::endl;
        std::cin >> RUSure;
        if (RUSure = 0) {
            delete this;
        }
        std::cout << "\x1B[2J\x1B[H";
    }
};

class GPU : public Product {
private:
    int max_res;
    bool compatibility; // enum
public:
};

class APU : public CPU, GPU {

};

//------------------
// 
//------------ Users -------------

class User {
private:
    std::string username = "username";
    std::string password = "password";
public:
    User() {}
    User(std::string username, std::string password) {
        this->username = username;
        this->password = password;
    }
    virtual void AddRemove_Product() = 0;
    friend void login();
};

class Administrator : public User {
private:
public:
    Administrator() {}
    void AddRemove_Product() {
        int product_name;
        if (product_name = 0)
        {
            Product* X = new GPU();
            X->addProduct();
        }
        else if (product_name = 1) {
            Product* X = new CPU();
            X->addProduct();
        }
    }
};

class Client : public User {
private:
    void AddRemove_Product() {
        NULL;
    }
public:
    Client() {}
};

void login(std::string username, std::string password) {
    std::cout << "Username: " << std::endl;
    std::cin >> username;
    std::cout << "Password: " << std::endl;
    std::cin >> password;
    std::string v[1];
    for (int i = 0; i <= (sizeof(v) / sizeof(*v)); i++) { // comparam i cu marimea vectorului
        if (v[i] != username) {

        }
    }
}

int main()
{
    User* A = new Administrator();
    User* B = new Client();
    CPU C;
    C.addProduct();
}