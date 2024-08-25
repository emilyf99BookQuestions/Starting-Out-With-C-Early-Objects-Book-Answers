#pragma once

//Question Fifteen
class OrderStatus {
public:
	static void OrderStatusStart();
private:
	static void GetOrderDetails(int& spoolsOrdered, int& currentStock, double& specialShippingCharges);
	static void CreateOrderDetails(int spoolsOrdered, int currentStock, double specialShippingCharges);
};