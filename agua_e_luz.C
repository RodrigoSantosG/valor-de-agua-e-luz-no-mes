using System;
					
public class Program
{
	public static void Main()
	{
		double minimo, mdmin, soma = 0, valor, md;
        int dia, qtmuito = 0, qtpouco, i;

        // Saber o qual é o valor gasto por agua / luz.

        Console.WriteLine("Qual o valor minimo gasto: ");
        minimo = Convert.ToDouble(Console.ReadLine());

        // Sanber quantos dias gastos.
        
        Console.WriteLine("Quantos dias gastos: ");
        dia = Convert.ToDouble(Console.ReadLine());

        mdmin = minimo / dia;

        // inicio do loop

        for ( i = 0; i < dia; i++)
        {
            Console.WrideLine("Valor da agua: ");
            valor = Convert.ToDouble(Console.ReadLine());

            soma += valor;

            // inicio do comando de decisão.

            if (valor > mdmin)
            {
                Console.WriteLine("Gasto Muito alto.");
            }
            else
            {
                Console.WriteLine("Gasto Aceitavel");

                qtpouco += 1;
            }
            
            //fim do loop

            md = soma / dia;

            Console.WriteLine("Media: "+media);

            Console.WriteLine("Ano Total Gasto: "+(md * 365));
        }
    
        

	}
}