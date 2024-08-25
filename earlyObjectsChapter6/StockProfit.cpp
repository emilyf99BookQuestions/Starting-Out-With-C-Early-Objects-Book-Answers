#include "StockProfit.h"
#include <iostream>
#include <iomanip>


//Question Fourteen
void StockProfit::StockProfitstart()
{
	int numberOfShares = GetNumberOfShares();
	double purchasePriceOfShare = GetPriceOfShares();
	double commissionPricePaid = GetCommissionPricePaid();

	double salePricePerShare = GetSalesPriceOfShare();
	double purchaseCommissionPaid = GetPurchaseCommission();

	double totalValue = SaleOfStockTotal(numberOfShares, purchasePriceOfShare,commissionPricePaid, 
										 salePricePerShare, purchaseCommissionPaid);

	std::cout << std::fixed;
	std::cout << std::setprecision(2) << "The total profit for your shares is " << totalValue;

}

int StockProfit::GetNumberOfShares()
{
	int numberOfShares = 0;
	std::cout << "How many shares have you bought? (Whole shares only): ";
	std::cin >> numberOfShares;

	return numberOfShares;
}

double StockProfit::GetPriceOfShares()
{
	double priceOfShares = 0.00;
	std::cout << "What price did you pay for the shares?: ";
	std::cin >> priceOfShares;

	return priceOfShares;
}

double StockProfit::GetCommissionPricePaid()
{
	double commissionPricePaid = 0.00;
	std::cout << "How much initial commission did you pay?: ";
	std::cin >> commissionPricePaid;

	return commissionPricePaid;
}

double StockProfit::GetSalesPriceOfShare()
{
	double salesPrice = 0.00;
	std::cout << "How much did you sell each share for?: ";
	std::cin >> salesPrice;

	return salesPrice;
}

double StockProfit::GetPurchaseCommission()
{
	double purchaseCommissionPrice = 0.00;
	std::cout << "How much purchase commission did you pay?: ";
	std::cin >> purchaseCommissionPrice;

	return purchaseCommissionPrice;
}

double StockProfit::SaleOfStockTotal(int numberOfShares, double purchasePriceOfShare,
	double commissionPricePaid, double salePricePerShare, double purchaseCommissionPaid)
{
	double profit = ((numberOfShares * salePricePerShare) - commissionPricePaid) -
					((numberOfShares * purchasePriceOfShare) + purchaseCommissionPaid);

	return profit;
}
