#include "Finance.h"

double Finance::getOutstandingAmount() {
  return this->outstandingAmount;
}

void Finance::setOutstandingAmount(double outstandingAmount) {
  this->outstandingAmount = outstandingAmount;
}

double Finance::getPaymentStatus() {
  return this->paymentStatus;
}

void Finance::setPaymentStatus(bool newStatus) {
  this->paymentStatus = newStatus;
}