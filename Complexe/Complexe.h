class Complexe {
private:
	float reel;
	float imaginaire;
public:
	Complexe(float re = 0, float im = 0) { reel = re; imaginaire = im; };
	void Affiche(void) const;
	void Affiche(ostream& flux) const;
	float GetRe(void) const { return reel; };
	float GetIm(void) const { return imaginaire; };
	float GetModule(void) const { return sqrt(pow(reel, 2) + pow(imaginaire, 2)); };
	Complexe Addition(const Complexe& b) const;
	//Complexe Addition(const float& b) const;
	//Complexe operator+(const Complexe& b) const;
	//Complexe operator+(const float& b) const;
	Complexe Multiplication(const Complexe& b)const;
	Complexe Soustraction(const Complexe& b)const;
	Complexe Division(const Complexe& b)const;

	float Argument(void)const;
	Complexe Conjuge(void) const;
	Complexe Opposer(void) const;
	~Complexe(void);


};
Complexe operator+(const Complexe& a, const Complexe& b);
Complexe operator*(const Complexe& a, const Complexe& b);
ostream& operator<<(ostream& flux, const Complexe& z);