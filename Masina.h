class Masina {

	char* numeFirma = 0;
	int litriCombustibil;
	float consum;
	long long kilometraj;

public:

	void bisnitar();
	void cursa(int distanta);

	void SetNumeFirma(char* numeFirma);
	char* GetNumeFirma();
	
	bool SetLitriCombustibil(int newCombustibil);
	bool SetConsum(float newConsum);
	bool SetKilometraj(long long newKilometraj);

	int GetLitriCombustibil();
	float GetConsum();
	int GetKilometraj();
};
