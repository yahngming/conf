# Tuning

### Pre check list
- Blackbox logging
- Bidirectional DShot
- Radio preset
- OSD

### Filters
- Disable gyro lowpass filters
- Disable d term lowpass filter 2
- BIQUAD d term low pass filter 1
- Angle mode
- Throttle pumps from 0-100
- Cutoff frequencies
  | Prop size | D term filter cuttoff |
  | --------- | --------------------- |
  | 1.6"      | 100-125Hz             |
  | 2"        | 100-125Hz             |
  | 3"        | 100-125Hz             |
  | 4"        | 90-110Hz              |
  | 5"        | 80-110Hz              |
  | 6"        | 80-110Hz              |
  | 7"        | 75-100Hz              |
  | 8"        | 75-100Hz              |

### PD balance and master multiplier
- I term = 0
- Angle mode
- Fast roll and pitch
- PI term = 0.3, 0.4, 0.5, 0.75, 1.0, 1.25, 1.5
- Master multiplier = 1.0, 1.25, 1.5, 1.75, 2.0
- Choose best values for fast responses
- I term = 1

### Feedforward
- FF = 0, 1.0, 1.5
- Acro mode
- Fast roll and pitch
- Choose best value for lowest delay

### Dynamic idle
- Idle RPM = 15000 / prop diameter
- Idle setting = idle RPM / 100
  | Prop size | Idle RPM | Idle setting |
  | --------- | -------- | ------------ |
  | 1.6"      | 9375     | 94           |
  | 2"        | 7500     | 75           |
  | 3"        | 5000     | 50           |
  | 3.5"      | 4285     | 43           |
  | 4"        | 3750     | 38           |
  | 5"        | 3000     | 30           |
  | 6"        | 2500     | 25           |
  | 7"        | 2150     | 22           |
  | 8"        | 1875     | 19           |

### RC smoothing
- Auto cutoffs
- Increase auto factor
