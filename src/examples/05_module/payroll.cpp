//
/*


Function gross_pay returns the product of hours and rate.  The function pays
straight time, there is not overtime.
*/
#include "payroll.h"

const double FICA_TAX_RATE = .062;

double get_fica_tax_total(double gross_pay)
{

    return gross_pay * FICA_TAX_RATE;

}