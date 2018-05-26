#include "../../headers/modelos/pago.h"

int Pago::getIdPago() {
    return this->idPago;
}
void Pago::setIdPago(int idPago) {
    this->idPago = idPago;
}

int Pago::getIdAlumno() {
    return this->idAlumno;
}
void Pago::setIdAlumno(int idAlumno) {
    this->idAlumno = idAlumno;
}

int Pago::getIdUsuario() {
    return this->idUsuario;
}
void Pago::setIdUsuario(int idUsuario) {
    this->idUsuario = idUsuario;
}

std::string Pago::getFechaPago() {
    return this->fechaPago;
}
void Pago::setFechaPago(std::string fechaPago) {
    this->fechaPago.assign(fechaPago);
}

std::string Pago::getTipoPago() {
    return this->tipoPago;
}
void Pago::setTipoPago(std::string tipoPago) {
    this->tipoPago.assign(tipoPago);
}

double Pago::getMonto() {
    return this->monto;
}
void Pago::setMonto(double monto) {
    this->monto = monto;
}

double Pago::getTotal() {
    return this->total;
}
void Pago::setTotal(double total) {
    this->total = total;
}