#pragma once

//Question Fourteen
class StockProfit {
public:
	static void StockProfitstart();

private:
	static int GetNumberOfShares();
	static double GetPriceOfShares();
	static double GetCommissionPricePaid();
	static double GetSalesPriceOfShare();
	static double GetPurchaseCommission();
	static double SaleOfStockTotal(int, double, double, double, double);
};