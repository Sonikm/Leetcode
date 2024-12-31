/**
 * @param {number[]} prices
 * @return {number}
 */
// Lets more optimize this
function maxProfit(prices) {

 let profits = 0;
 let bestBuy = prices[0];

 for(let price of prices)
 {
    bestBuy = Math.min(bestBuy, price);
    if(price - bestBuy > 0){
        profits = Math.max(profits, price - bestBuy);
    }
 }

 return profits;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
//   let minStockPurchasePrice = prices[0] || 0;
//   let profits = 0;

//   for (let i = 1; i < prices.length; i++) {
//     if (prices[i] < minStockPurchasePrice) {
//       minStockPurchasePrice = prices[i];
//     }
//     profits = Math.max(profits,  prices[i] - minStockPurchasePrice);
//   }

//   return profits;
}