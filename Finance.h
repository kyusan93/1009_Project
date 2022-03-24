#pragma once

#ifndef FINANCE_H
#define FINANCE_H

#include "Student.h"

class Finance : public Student {
  private:
    double totalAmount;
    double outstandingAmount;
    bool paymentStatus;
  public:
    Finance(double, double, bool);
    double calculateTotalAmount();
    double getOutstandingAmount();
    void setOutstandingAmount(double);
    double getPaymentStatus();
    void setPaymentStatus(bool);
}

#endif