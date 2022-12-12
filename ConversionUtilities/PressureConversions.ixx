module;

export module PressureConversions;

export double Pascal_Bar(double Pa)
{
	// 1 bar = 101325 Pascals
	double Pascal = 101325;
	return Pa / Pascal;
}

export double Bar_Pascal(double bar)
{
	//	1 bar = 101325 Pascal
	double Pascal = 101325;
	return bar * Pascal;
}

export double Psi_Bar(double psi)
{
	//  psi * 0.0689476
	return psi * 0.0689476;
}