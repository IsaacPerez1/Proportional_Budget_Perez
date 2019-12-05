
#include <iostream>
#include "Input_validation.h"
#include<iomanip>
#include<string>
#include<vector>
#include <fstream>
#include <iterator>
using namespace std;

class Income
{
  protected:
  double PaycheckJob1 = 6250.00, Paycheck1 = 500.00, Paycheck2 = 650.00, Refund= 83.33, amazonCredit = 15.0,tips =0.0;
  public:
  Income(){}

  double totalIncome()
  {return (PaycheckJob1+Paycheck1+Paycheck2+Refund+ amazonCredit);}

  void setPaycheckJob1(double pj1){PaycheckJob1 = pj1;}
  double getPaycheckJob1() const {return PaycheckJob1;}
  void setPaycheck1(double p1){Paycheck1 =p1;}
  double getPaycheck1() const {return Paycheck1;}
  void setPayceck2(double p2) {Paycheck2 = p2;}
  double getPaycheck2()const{return Paycheck2;}
  void setRefund(double r) {Refund =r;}
  double getRefund()const{return Refund;}
  void setAmazonCredit(double ac){amazonCredit =ac;}
  double getAmazonCredit() const{return amazonCredit;}
  void setTips(double ti){tips =ti;}
  double getTips() const{return tips;}

};

class Person: public Income
{
private:
//expenses
double mortgage= 900.0, electric =100.0, gasH=0.0, water =55.0, savings = 500.0, entertainment =50.0, clothes = 83.33, shoes=12.50, vendingMachine = 18.0, creditCards= 200.00, carPMT= 315.0, carInsrurance = 88.00, carMaintenance = 25.0,carGas=90.0, schoolBooks= 0.0, foodGroceries = 100.0, foodDiningOut =105.0, cleaningSupplies = 12.0,personalCare =50.0, charity = 100.0, dayCare=0.0, petCare=100.0, cellPhone =100.0, internet = 90.0, cable= 0.0, streamingServices=35.0, amazon = 90.0,Percent=0.0;

public:
Person():Income(){}
double total()
{return (mortgage+electric+gasH+water+savings+entertainment+clothes+shoes+vendingMachine+creditCards+carPMT+carInsrurance+carMaintenance+carGas+schoolBooks+foodGroceries+foodDiningOut+cleaningSupplies+charity+dayCare+petCare+cellPhone+internet+cable+streamingServices+amazon+personalCare);}

double whatsLeft()
{return (totalIncome()- total());}

  void setMortgage(double m){mortgage =m;}
  double getMortgage() const{return mortgage;}
  void setElectric(double e){electric =e;}
  double getElectric()const{return electric;}
  void setGasH(double gh){gasH = gh;}
  double getGasH()const{return gasH;}
  void setWater(double w){water =w;}
  double getWater()const{return water;}
  void setSavings(double s){savings = s;}
  double getSavings()const{return savings;}
  void setEntertainment(double e){entertainment =e;}
  double getEntertainment()const{return entertainment;}
  void setClothes(double c){clothes = c;}
  double getClothes()const{return clothes;}
  void setShoes(double sh){shoes =sh;}
  double getShoes()const{return shoes;}
  void setVendingMachine(double v){vendingMachine=v;}
  double getVendingMachine()const{return vendingMachine;}
  void setCreditCards(double cc){creditCards = cc;}
  double getCrediCards()const{return creditCards;}
  void setCarPMT(double pmt){carPMT=pmt;}
  double getCarPMT()const{return carPMT;}
  void setCarInsurance(double cip){carInsrurance = cip;}
  double getCarInsurnace()const{return carInsrurance;}
  void setCarMaintenance(double cm){carMaintenance =cm;}
  double getCarMaintenance()const{return carMaintenance;}
  void setCarGas(double cg){carGas= cg;}
  double getCargas()const{return carGas;}
  void setSchoolBooks(double sb){schoolBooks = sb;}
  double getSchoolBooks()const{return schoolBooks;}
  void setFoodGroceries(double fg){foodGroceries =fg;}
  double getFoodGroceries()const{return foodGroceries;}
  void setFoodDiningOut(double fdg){foodDiningOut =fdg;}
  double getFoodDiningOut()const{return foodDiningOut;}
  void setCleaningSupplies(double cs){cleaningSupplies =cs;}
  double getCleaningSupplies()const{return cleaningSupplies;}
  void setPersonalCare(double pc){personalCare =pc;}
  double getPersonalCare()const{return personalCare;}
  void setCharity(double ch){charity = ch;}
  double getCharity()const{return charity;}
  void setDayCare(double dc){dayCare =dc;}
  double getDayCare()const{return dayCare;}
  void setPetCare(double pc){petCare = pc;}
  double getPetCare()const{return petCare;}
  void setCellPhone(double cp){cellPhone =cp;}
  double getCellPhone()const {return cellPhone;}
  void setInternet(double i){internet = i;}
  double getInternet()const{return internet;}
  void setCable(double ca){cable = ca;}
  double getCable()const{return cable;}
  void setStreamingServices(double ss){streamingServices =ss;}
  double getStreamingServices()const{return streamingServices;}
  void setAmazon(double am){amazon = am;}
  double getAmazon()const{return amazon;}
  void setPercent(double p1p){Percent =p1p;}
  double getPercent()const{return Percent;}

  double percentPay()
  {return(Percent * .01);}
  

};

void showMenu(Person p1, Person p2,Person shared,vector<Person>vec)
{
cout << "              Monthly Budget-Proportional          "<< endl;
cout << "P1               "<<p1.getPercent() <<"%     P2             "<< p2.getPercent()<<"%"<<endl;
cout <<"DESC                 Income      Expenses           p1            p2"<< endl;
cout<<"Paycheck job 1        $"<<shared.getPaycheckJob1()<< endl;
cout << "Paycheck 1 job 1      $"<<shared.getPaycheck1()<<endl;
cout << "Paycheck 2 job 2      $"<<shared.getPaycheck2()<< endl;
cout <<"Tips                  $"<<shared.getTips()<<endl;
cout<<"Refund                $"<<shared.getRefund()<<endl;
cout <<"Mortgage/Rent                     $"<<shared.getMortgage()<<"           $"<<shared.getMortgage()*p1.percentPay() <<"       $" << shared.getMortgage()*p2.percentPay()<<endl;
cout << "Electric                          $" << shared.getElectric()<<"           $"<< shared.getElectric()*p1.percentPay()<<"        $"<<shared.getElectric()*p2.percentPay()<<endl;
cout<< "Gas Home                          $"<<shared.getGasH()<<"             $"<<shared.getGasH()*p1.percentPay()<<"         $"<<shared.getGasH()*p2.percentPay()<<endl;
cout<<"TOTALS                $"<<p1.totalIncome()<<"    $"<<p1.total()<<"          $"<<shared.total()*p1.percentPay()<<"      $"<<shared.total()*p2.percentPay();

}

void showOption()
{
  cout <<"\nA: Change P1 Percent "<<endl;
  cout <<"B: Change P2 Percent " << endl;
}

void handleOption(Person &p1, Person &p2, Person &shared, char option,vector<Person>&vec,double x)
{

if(option =='a'|| option == 'A')
  {
    cout <<"what is the new percent? "<<endl;
    x=validateDouble(x);
    p1.setPercent(x);
  }

else if(option =='B'|| option =='b')
  {
    cout <<"What is the new Percent?"<< endl;
    x=validateDouble(x);
    p2.setPercent(x);
  }


}



int main() 
{
cout<<fixed<<setprecision(2);
 Person p1;
 Person p2;
 Person shared;
vector<Person>vec;
 char option;
 double x;

 p1.setPercent(70.0);
 p2.setPercent(30.0);

do{

cout << "\033[2J\033[1;1H";

 showMenu(p1, p2,shared,vec);
 showOption();
  cin >> option;
 handleOption(p1, p2, shared, option, vec, x);
 vec.push_back(p1);
 vec.push_back(p2);
 vec.push_back(shared);
 }while(option != 'x' && option != 'X');
cout << "\033[2J\033[1;1H";
cout << "BYE";


 return 0;
}