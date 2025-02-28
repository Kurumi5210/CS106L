/*
 * CS106L Assignment 4: Weather Forecast
 * Created by Haven Whitney with modifications by Fabio Ibanez & Jacob Roberts-Baca.
 */

#include <algorithm>
#include <random>
#include <vector>
#include <iostream>


/* #### Please feel free to use these values, but don't change them! #### */
double kMaxTempRequirement = 5;
double uAvgTempRequirement = 60;

struct Forecast {
  double min_temp;
  double max_temp;
  double avg_temp;
};

Forecast compute_forecast(const std::vector<double>& dailyWeather) {
  // STUDENT TODO 1: return a forecast for the daily weather that is passed in.
  auto min_t = std::min_element(dailyWeather.begin(), dailyWeather.end());
  double min_temp = *min_t;

  auto max_t = std::max_element(dailyWeather.begin(), dailyWeather.end());
  double max_temp = *max_t;

  double sum = std::accumulate(dailyWeather.begin(), dailyWeather.end());
  double avg_t = sum/dailyWeather.size();
  double avg_temp = avg_t;

  Forecast forecast;
  forecast.min_temp = min_temp;
  forecast.max_temp = max_temp;
  forecast.avg_temp = avg_temp;

  return forecast;
}

std::vector<Forecast> get_forecasts(const std::vector<std::vector<double>>& weatherData) {
  /*
   * STUDENT TODO 2: returns a vector of Forecast structs for the weatherData which contains
   * std::vector<double> which contain values for the weather on that day.
   */
  auto lambda = [](const std::vector<double>& dailyWeather) {
    return compute_forecast(dailyWeather)
  }
  std::vector<Forecast> forecast(weatherData.size());

  std::transform(
    weatherData.begin(),
    weatherData.end(),
    forecast.begin(),
    [](const std::vector<double.& dailyWeather) {
      return compute_forecast(dailyWeather)
    }
  )
  return forecast;
}

std::vector<Forecast> get_filtered_data(const std::vector<Forecast>& forecastData) {
  // STUDENT TODO 3: return a vector with Forecasts filtered for days with specific weather.
  // 复制一份天气数据，传入的const无法修改
  std::vector<Forecast> forecastData_temp = forecastData;

  auto predicate = [](const Forecast& forecast) {
    return (forecast.max_temp - forecast.min_temp) > kMaxTempRequirement &&
            forecast.avg_temp >= uAvgTempRequirement;
  }
  forecastData_temp.erase(std::remove_if(forecastData_temp.begin(), forecastData_temp.end(), predicate), forecastData_temp.end());
  return forecastData_temp;
}


std::vector<Forecast> get_shuffled_data(const std::vector<Forecast>& forecastData) {
  // STUDENT TODO 4: Make use of a standard library algorithm to shuffle the data!
  std::vector<Forecast> forecastData_temp = forecastData;

  std::random_device rd;
  std::mt19937 g(rd());

  std::shuffle(forecastData_temp.begin(), forecastData_temp.end(), g);

  return forecastData_temp;
}

std::vector<Forecast> run_weather_pipeline(const std::vector<std::vector<double>>& weatherData) {
  // STUDENT TODO 5: Put your functions together to run the weather pipeline!
  
}

/* #### Please don't change this line! #### */
#include "utils.cpp"