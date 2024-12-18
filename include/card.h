#pragma once

class Card
{
public:
    enum class CardSuit {
        BEGIN,
        DIAMOND,    // 方片
        CLUB,       // 梅花
        HEART,      // 红桃
        SPADE,      // 黑桃
        END
    };

    enum class CardPoint {
        BEGIN,
        CARD_3,
        CARD_4,
        CARD_5,
        CARD_6,
        CARD_7,
        CARD_8,
        CARD_9,
        CARD_10,
        CARD_J,
        CARD_Q,
        CARD_K,
        CARD_A,
        CARD_2,
        CARD_BJ,  // black joker
        CARD_RJ,  // red joker
        END
    };


    Card(/* args */);
    ~Card();

    void setCardPoint(CardPoint point);
    void setCardSuit(CardSuit suit);
    CardPoint getCardPoint() const;
    CardSuit getCardSuit() const;

private:
    CardPoint card_point_;
    CardSuit  card_suit_;
};


