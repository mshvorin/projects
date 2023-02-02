import yfinance as yf
import time
import matplotlib.pyplot as plt
import datetime
stock_info = yf.Ticker('TSLA').info
# stock_info.keys() for other properties you can explore
market_price = stock_info['regularMarketPrice']
previous_close_price = stock_info['regularMarketPreviousClose']
stock_prices = []
times = []
for i in range(20):
	stock_info = yf.Ticker('TSLA').info
	market_price = stock_info['regularMarketPrice']
	stock_prices.append(market_price)
	times.append(time.strftime("%H:%M:%S"))
	#time.sleep(5)
#def ascending_triangle():
#	for i in range(len(stock_prices)):
#		print("printing triangle")
#print(stock_info.keys())
plt.plot(times,stock_prices)
plt.xlabel('time')
plt.ylabel('price')
plt.title('Price of Tesla')
plt.show()
print('market price ', market_price)
print('previous close price ', previous_close_price)
print(stock_prices)
