#ifndef DISPENSERTYPE_H
#define DISPENSERTYPE_H

class dispenserType {
public:
    int getNoOfItems() const;

    int getCost() const;

    void makeSale();

    dispenserType();

    dispenserType(int setNoOfItems, int setCost);

private:
    int numberOfItems;
    int cost;          // سعر العنصر بالـ Cents
};

#endif // DISPENSERTYPE_H