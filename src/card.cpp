#include "card.h"

Card::Card(/* args */)
{
}

Card::~Card()
{
}

void Card::setCardPoint(CardPoint point) {
    card_point_ = point;
}

void Card::setCardSuit(CardSuit suit) {
    card_suit_ = suit;
}

Card::CardPoint Card::getCardPoint() const {
    return card_point_;
}

Card::CardSuit Card::getCardSuit() const {
    return card_suit_;
}