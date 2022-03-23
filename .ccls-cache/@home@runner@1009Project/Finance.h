#include <iostream>
#include <string>

class Finance : public Student{
  private:
    double totalAmount;
    double outstandingAmount;
    bool paymentStatus;
  public:
    Finance(double, bool)
    double calculateTotalAmount();
    double getOutstandingAmount();
    void setOutstandingAmount(double);
    double getPaymentStatus();
    void setPaymentStatus(bool);
}