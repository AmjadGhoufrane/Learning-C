#pragma once

struct rationnel_
{
    int numerateur;
    int denominateur;
};

typedef struct rationnel_ rationnel;

void afficher(const rationnel* r);

void saisir(rationnel* r);