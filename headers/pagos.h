#ifndef PAGOS_H
#define PAGOS_H

#include <string>

class Pagos{
public:
    int getIdPago();
    void setIdPago(int idAlumno);

    int getIdAlumno();
    void setIdAlumno(int idAlumno);

    int getIdUsuario();
    void setIdUsuario(int idUsuario);

    int getIdCarrera();
    void setIdCarrera(int idCarrera);

    std::string getFechaPago();
    void setFechaPago(std::string fechaPago);
    
    std::string getTipoPago();
    void setTipoPago(std::string tipoPago);

    double getMonto();
    void setMonto(double monto);

    double getTotal();
    void setTotal(double total);
private:
    int idPago;
    int idAlumno;
    int idUsuario;
    int idCarrera;
    std::string fechaPago;
    std::string tipoPago;
    double monto;
    double total;
};

#endif