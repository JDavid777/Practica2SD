const MAXNOM = 30;


struct nodo_paciente{

	char nombres[MAXNOM];
	int edad;
	int numHabitacion;
	nodo_indicadores indicadores;


};


struct nodo_indicadores{

	float frecuenciaCardiaca;

};


program gestion_alertas{

	version gestion_alertas_version{
		bool enviarIndicador(nodo_paciente objPaciente)=1;
	}=1;

}=0x20000001;


