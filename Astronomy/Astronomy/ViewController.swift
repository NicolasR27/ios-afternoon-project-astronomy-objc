//
//  ViewController.swift
//  Astronomy
//
//  Created by Nicolas Rios on 6/6/20.
//  Copyright © 2020 Nicolas Rios. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    var photoController = PhotoController()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        photoController.fetchRoverPhotos("curiosity", 12) { (data, error) in
            guard let data = data else { return }
            print("Data from sol 12, first Image: \(data.roverPhotos[0].photoURL)")
            print("Total photos: \(data.roverPhotos.count)")
            print(data.roverPhotos[0].photoID)
            print(data.roverPhotos[0].sol)
            print(data.roverPhotos[0].cameraName)
            print("Data from sol 12, 32nd Image: \(data.roverPhotos[31].photoURL)")
            print("Total photos: \(data.roverPhotos.count)")
            print(data.roverPhotos[31].photoID)
            print(data.roverPhotos[31].sol)
            print(data.roverPhotos[31].cameraName)
            return
        }
        photoController.fetchPhotoManifest("curiosity") { (data, error) in
            guard let data = data else { return }
            print("Curiosity manifest; name: \(data.name)")
            print("Total photos: \(data.total_photos)")
            print("Sols: \(data.sols?.count)")
            print("Last sol: \(data.sols![data.sols!.count - 1])")
            return
        }
    }
    
    
}
