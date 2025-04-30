# Robotic-Vision-SLAM-project-my_office
# Monocular Visual SLAM in MATLAB

This repository implements a Monocular Visual SLAM system using MATLAB, including an official example based on the TUM RGB-D dataset and a custom dataset recorded in an office scene.

## Project Structure

```
.
├── SLAM.m                         # Run example with TUM RGB-D dataset
├── test_SLAM.m                    # Run SLAM using custom office scene
├── my_office_video.mp4           # Recorded webcam video
├── my_office_images/             # Extracted image frames (color)
├── bagOfFeatures.bin             # Visual vocabulary (Bag of Words)
├── orbslamGroundTruth.mat        # Optional ground truth for evaluation
├── helper*.m                     # All supporting SLAM helper functions
└── *_result/                     # Output folder with result figures
```

## How to Run

### Run Example Code (TUM RGB-D Dataset)
```matlab
SLAM
```
- Loads and runs SLAM using a public dataset (Freiburg3 long office household).
- Outputs camera trajectory, 3D sparse map, and absolute translation error.

### Run SLAM with Your Own Dataset (Webcam Video)
```matlab
test_SLAM
```
- Uses frames extracted from your own recorded video (`my_office_video.mp4`).
- Make sure the folder `my_office_images/` contains color PNG frames:  
  `frame_0001.png, frame_0002.png, ..., frame_XXXX.png`.

## Record and Extract My Own Dataset (my_office)
Record directly in MATLAB:
```matlab
cam = webcam;
writer = VideoWriter('my_office_video.mp4', 'MPEG-4');
open(writer)
for i = 1:200
    frame = snapshot(cam);
    writeVideo(writer, frame);
end
close(writer);
clear cam;
```
Then extract frames:
```matlab
vid = VideoReader('my_office_video.mp4');
frameIdx = 1;
while hasFrame(vid)
    frame = readFrame(vid);
    imwrite(frame, sprintf('my_office_images/frame_%04d.png', frameIdx));
    frameIdx = frameIdx + 1;
end
```

## Output
The following result plots are saved:
- `Trajectory.png`: Estimated camera trajectory
- `mapPlot.png`: 3D sparse map reconstruction
- `absolute_translation_error.png`: Accuracy against ground truth (if available)

## Requirements

- MATLAB R2024b
- Computer Vision Toolbox
- Image Processing Toolbox
- MATLAB Coder (for codegen)
- Webcam 

## Author

Shihao Zhao  
Southern Illinois University Edwardsville  
ME-462-001 Robotic Vision (Spring 2025)

---
