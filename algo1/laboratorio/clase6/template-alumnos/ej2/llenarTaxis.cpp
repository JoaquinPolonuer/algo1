
int llenarTaxis1(int g1, int g2, int g3) {
	int res = g3 + (g2 + 1) / 2; //+ (g1 + 3) / 4;
    // el error esta en sumar (g1 + 3) / 4
    // si las cantidades son iguales, siempre puedo juntar los
    // grupos de 1 con los de 3
    // Yo haria g3 + (g2 + 1) / 2
	return res;
}

int llenarTaxis2(int g1, int g2, int g3) {
	int res = g3;

	if (g1 <= g3) {
		g1 = 0;
	} else {
		g1 = g1 - g3;
	}

	return res + (g2 + 1) / 2 + (g1 + 3) / 4;
    // creo que la implementacion es correcta
}

int llenarTaxis3(int g1, int g2, int g3) {
	int res = g3;

	if (g1 <= g3) {
		g1 = 0;
	} else {
		g1 = g1 - g3;
	}

	res = res + g2 / 2;
	if (g2 % 2 == 1){ // 0) {
        res += 1; // esto antes no estaba
        if (g1 >= 2) {
			g1 = g1 - 2;
		} else {
			g1 = 0;
		}
	}

	return res + (g1 + 3) / 4;
    // el error era que antes preguntabamos si g2 era par, pero
    // teniamos que preguntar si dos era IMPAR
    // si es asi, debiamos sumar 1 a res pq estamos agregando un auto nuevo
}
