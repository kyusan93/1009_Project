#pragma once

#include <string>

using namespace std;

class Finance {
  private:
    double totalAmount;
    double outstandingAmount;
    bool paymentStatus;

  public:
    Finance(double totalAmount, double outstandingAmount, bool paymentStatus);

    // Getter
    double getTotalAmount();
    double getOutstandingAmount();
    double getPaymentStatus();

    // Setter
    void setTotalAmount(double);
    void setOutstandingAmount(double);
    void setPaymentStatus(bool);

    // Abstract printInfo ??? what is this OOP?
	  double calulateStatement();
    void printInfo();
};