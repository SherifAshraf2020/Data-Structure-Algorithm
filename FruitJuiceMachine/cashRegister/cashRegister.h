#ifndef CASHREGISTER_H
#define CASHREGISTER_H

class cashRegister {
public:
    int getCurrentBalance() const;

    void acceptAmount(int amountIn);

    cashRegister();

    cashRegister(int cashIn);

private:
    int cashOnHand;
};

#endif // CASHREGISTER_H