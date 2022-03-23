#include <iostream>
#include <string>

class Finance {
  private:
    double outstandingAmount;
    bool paymentStatus;

  public:
    double makePayment(double amount);
    double getPaymentStatus();
    void setPaymentStatus(bool);
}