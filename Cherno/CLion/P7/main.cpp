#include <iostream>
#define LOG(StringCombination) std::cout << StringCombination << std::endl;

class Father
{
protected:
    std::string RealEstateValue = "100 Million $";
public:
    void GetRealEstate()
    {
        LOG("Father's Real Estate: " << RealEstateValue);
    }
};

//class Son : public Father
//{
//public:
//    void GetInheritedRealEstate()
//    {
//        LOG("Son's Inherited Real Estate: " << RealEstateValue);
//    }
//};

//class Son : private Father
//{
//public:
//    void GetInheritedRealEstate()
//    {
//        LOG("Son's Inherited Real Estate: " << RealEstateValue);
//    }
//};

class Son : protected Father
{
public:
    void GetInheritedRealEstate()
    {
        LOG("Son's Inherited Real Estate: " << RealEstateValue);
    }
};

class GrandSon : protected Son
{
public:
    void Get_InheritedRealEstate()
    {
        LOG("GrandSon's Inherited Real Estate: " << RealEstateValue);
    }
};

int main() {
    Father father;
    father.GetRealEstate();
    Son son;
    son.GetInheritedRealEstate();
    GrandSon grandSon;
    grandSon.Get_InheritedRealEstate();

    return 0;
}
